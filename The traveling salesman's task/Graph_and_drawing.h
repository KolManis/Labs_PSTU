#pragma once
#include <glut.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int n;
int* result;
int** help;
int*** mat;

int W_width;
int W_height;

const int maxSize = 20;
int amountVerts;
int R;

template<class T>
class Graph
{
	vector<T> vertexList;
public:
	int adjMatrix[maxSize][maxSize]; //Матрица смежностей
	Graph();
	~Graph();
	void DrawGraph(); // Отрисовка графа
	void InsertEdge(const T& vertex1, const T& vertex2, int weight); //Вставка ребра для неориентированного графа
	void InsertVertex(const T& vertex); //Вставка вершины + ребро
	void DeleteVertex(const int& vert); // удаление любого элемента
	int GetVertPos(const T& vertex);  // индекс вершины
	bool isEmpty(); //пустотой ли граф
	bool IsFull(); //полный ли граф
	int GetAmountVerts(); //Получение количества вершин
	int GetAmountEdges(); //Получение количества ребер для неориентированного графа
	int GetWeight(const T& vertex1, const T& vertex2); //Получение веса между вершинами
	vector<T> GetNbrs(const T& vertex); //Получение вектора соседей
	void Print();
};

struct vertCoord // структура с координатами для построения вершин
{
	int x, y;
};

vertCoord ver[20];


Graph<int> graph;

void preparation(int***& mat, int& n, int**& help, int*& result) //принимате указатели по ссылке, создание массива
{
	n = amountVerts;

	help = new int* [n];

	result = new int[n];

	mat = new int** [n];

	for (int i = 0; i <= n; i++) //заполнение массива
	{
		help[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		mat[i] = new int* [n];
		for (int j = 0; j < n; j++)
		{
			if (graph.adjMatrix[i][j] == 0)  //заменяем 0 на nullptr
			{
				mat[i][j] = nullptr;
				continue;
			}
			mat[i][j] = new int(graph.adjMatrix[i][j]);
		}
	}
}

void answer(int*** mat, int n, int** help, int* path) 
{

	for (int l = 0; l < n; l++) // редукция строк
	{
		for (int i = 0; i < n; i++)
		{
			int min = 111111111;
			for (int j = 0; j < n; j++)
				if (mat[i][j] && min > *mat[i][j])
					min = *mat[i][j];
			for (int j = 0; j < n; j++)
				if (mat[i][j])
					*mat[i][j] -= min;
		}

		for (int j = 0; j < n; j++) // столбцов 
		{
			int min = 111111111;
			for (int i = 0; i < n; i++)
				if (mat[i][j] && min > *mat[i][j])
					min = *mat[i][j];
			for (int i = 0; i < n; i++)
				if (mat[i][j])
					*mat[i][j] -= min;
		}

		for (int i = 0; i < n; i++)  //оценка нулевых элементов
			for (int j = 0; j < n; j++)
				help[i][j] = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (mat[i][j] && !*mat[i][j])
				{
					int hmin = 111111111;
					int vmin = 111111111;

					for (int l = 0; l < n; l++)
						if (l != i && mat[l][j] && hmin > *mat[l][j])
							hmin = *mat[l][j]; // минимум строк

					for (int l = 0; l < n; l++)
						if (l != j && mat[i][l] && vmin > *mat[i][l])
							vmin = *mat[i][l]; // минимум столбцов

					help[i][j] = hmin + vmin;
				}
			}

		int mcost = 0, mi = 0, mj = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (mat[i][j] && mcost < help[i][j])
				{
					mcost = help[i][j];
					mi = i;
					mj = j;
				}
		path[mi] = mj;

		for (int i = 0; i < n; i++) // зануление строки  и столбца, после нахождения одного из участков путей	
			mat[i][mj] = nullptr;

		for (int i = 0; i < n; i++)
			mat[mi][i] = nullptr;

		mat[mj][mi] = nullptr;
	}
}

void road(int*** mat, int n, int** help, int* result) // подсчета веса ребра и вывод пути
{
	for (int i =0; i < amountVerts; i++) //проверка на возможность прохода по графу
	{
		int count = 0;
		for (int j = 0; j < amountVerts; j++)
		{
			if (graph.adjMatrix[i][j] != 0) 
			{
				count++;
			}
		}
		if (count == 1)  
		{
			cout << "Ошибка граф невозможно обойти! Есть вершина с одним ребром!" << endl;
			return;
		}
	}

	preparation(mat, n, help, result);
	int s = 0;
	answer(mat, n, help, result);
	for (int i = 0, j = 0; i < n; i++)
	{

		j = result[i];
		s += graph.adjMatrix[i][j];
	}
	cout << endl;
	cout << "\nВершины: ";
	int temp = 0;
	for (int l = 0; l < n;)
	{
		for (int i = 0, j = 0; i < n; i++)
		{
			if (temp == 0 || i + 1 == temp)
			{
				if (temp == 0)
				{ 
					cout << i + 1; 
				}
				j = result[i];
				temp = j + 1;
				if (temp > 0)
				{ 
					cout << " -> " << temp; 
				}
				l++;
			}
		}
	}
	cout << "\nПуть: " << s;
	cout << endl;
}


template<class T>
std::vector<T> Graph<T>::GetNbrs(const T& vertex) {
	std::vector<T> nbrsList;
	int vertPos = this->GetVertPos(vertex);
	if (vertPos != (-1))
	{
		for (int i = 0, vertexListSize = this->vertexList.size(); i < vertexListSize; ++i)
		{
			if (this->adjMatrix[vertPos][i] != 0 && this->adjMatrix[i][vertPos] != 0)
				nbrsList.push_back(this->vertexList[i]);

		}
	}
	return nbrsList;
}

template<class T>
void Graph<T>::InsertVertex(const T& vertex) {
	if (!this->IsFull()) {
		this->vertexList.push_back(vertex);
	}
	else {
		cout << "Ошибка, превышен лимит вершин" << endl;
		return;
	}
}

template<class T>
void Graph<T>::DeleteVertex(const int& vert) {
	int verT = vert - 1;
	int pos = this->GetVertPos(vert);
	if (pos != -1) 
	{
		this->vertexList.erase(vertexList.begin() + pos);
		for (int i = 0; i < maxSize - 1; i++)
		{
			for (int j = 0; j < maxSize - 1; j++)
			{
				if (j < verT && i < verT)
				{
					adjMatrix[i][j] = adjMatrix[i][j];
				}
				else if (j >= verT && i < verT)
				{
					adjMatrix[i][j] = adjMatrix[i][j+1];
				}
				else if (j < verT && i >= verT)
				{
					adjMatrix[i][j] = adjMatrix[i+1][j];
				}
				else if (j >= verT && i >= verT)
				{
					adjMatrix[i][j] = adjMatrix[i+1][j + 1];
				}
			}
		}
	}
	for (int i = 0; i < this->vertexList.size(); ++i) {
		if (i >= verT)
		{
			this->vertexList[i] = this->vertexList[i] - 1;
		}
	}
}

template<class T>
int Graph<T>::GetAmountEdges() {
	int amount = 0;
	if (!this->isEmpty()) 
	{
		for (int i = 0, vertexListSize = this->vertexList.size(); i < vertexListSize; ++i)
		{
			for (int j = 0; j < vertexListSize; ++j) 
			{
				if (this->adjMatrix[i][j] == this->adjMatrix[j][i] && this->adjMatrix[i][j] != 0)
					amount += 1;
			}
		}
		return (amount / 2);
	}
	else
		return 0;
}

template<class T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2) {
	if (!this->isEmpty()) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return adjMatrix[vertPos1][vertPos2];
	}
	return 0;
}

template<class T>
int Graph<T>::GetAmountVerts() {
	return this->vertexList.size();
}

template<class T>
bool Graph<T>::isEmpty() {
	if (this->vertexList.size() != 0)
		return false;
	else
		return true;
}

template<class T>
bool Graph<T>::IsFull() {
	return (vertexList.size() == maxSize);
}

template <class T>
int Graph<T>::GetVertPos(const T& vertex) {
	for (int i = 0; i < this->vertexList.size(); ++i)
	{
		if (this->vertexList[i] == vertex)
			return i;
	}
	return -1;
}

template<class T>
Graph<T>::Graph() {
	for (int i = 0; i < maxSize; ++i)
	{
		for (int j = 0; j < maxSize; ++j)
		{
			this->adjMatrix[i][j] = 0;
		}
	}
}

template<class T>
Graph<T>::~Graph() {

}

Graph<int> makeGraph()
{
	Graph<int> graph;
	int amountEdges, sourceVertex, targetVertex, edgeWeight;
	cout << "Введите количество вершин: ";
	cin >> amountVerts;
	cout << "Введите количество ребер: ";
	cin >> amountEdges;
	for (int i = 1; i <= amountVerts; ++i)
	{
		int* vertPtr = &i;
		graph.InsertVertex(*vertPtr);
	}

	for (int i = 0; i < amountEdges; ++i) {
		cout << "Начальная вершина: ";
		cin >> sourceVertex;
		int* sourceVertPtr = &sourceVertex;
		cout << "Конечная вершина: ";
		cin >> targetVertex;
		int* targetVertPtr = &targetVertex;

		cout << "Вес ребра: "; cin >> edgeWeight; cout << endl;
		graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);
	}	
	cout << endl;
	graph.Print();
	cout << endl;
	return graph;
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight) {
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);

		if (this->adjMatrix[vertPos1][vertPos2] != 0 && this->adjMatrix[vertPos2][vertPos1] != 0)
		{
			cout << "Ребро между вершинами уже есть" << endl;
			return;
		}
		else 
		{
			this->adjMatrix[vertPos1][vertPos2] = weight;
			this->adjMatrix[vertPos2][vertPos1] = weight;
		}
	}
	else {
		cout << "Нет обеих вершин или одной из них " << endl;
		return;
	}
}

template<class T>
void Graph<T>::Print() {
	if (!this->isEmpty())
	{
		cout << "Матрица смежности графа: " << endl;
		cout << "-";
		for (int i = 0; i < this->vertexList.size(); ++i) {
			cout << setw(9) << vertexList[i];
		}
		cout << endl;
		for (int i = 0; i < this->vertexList.size(); ++i) {
			cout << this->vertexList[i];
			for (int j = 0; j < this->vertexList.size(); ++j)
			{
				cout << setw(9) << this->adjMatrix[i][j];
			}
			cout << endl;
		}
	}
}

void setCoord(int i, int n)
{
	int R_;
	int x0 = W_width / 2;
	int y0 = W_height / 2;
	if (W_width > W_height)
	{
		R = 5 * (W_height / 13) / n;
		R_ = W_height / 2 - R - 10;
	}
	else {
		R = 5 * (W_width / 13) / n;
		R_ = W_width / 2 - R - 10;
	}
	float theta = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = R_ * cos(theta) + y0;
	float x1 = R_ * sin(theta) + x0;

	ver[i].x = x1;
	ver[i].y = y1;
}

void drawCircle(int x, int y, int R) // отрисовка круга
{
	glColor3f(0.2, 0.7, 0.5);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void drawText(int nom, int x1, int y1) 
{
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = to_string(nom);
	glRasterPos2i(x1 - 5, y1 - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[j]);
}

void drawVertex(int n)
{
	for (int i = 0; i < n; i++) {
		drawCircle(ver[i].x, ver[i].y, R);
		drawText(i + 1, ver[i].x, ver[i].y);
	}
}

void drawLine(int text, int x0, int y0, int x1, int y1)
{
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();

	drawText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);
}

template<class T>
void Graph<T>::DrawGraph()
{
	int n = vertexList.size();
	for (int i = 0; i < n; i++)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int a = adjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, ver[i].x, ver[i].y, ver[j].x, ver[j].y);
			}
		}
	}
	drawVertex(n);
}

void reshape(int width, int height)
{
	W_width = width;
	W_height = height;
	glViewport(0, 0, (GLsizei)W_width, (GLsizei)W_height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)W_width, 0, (GLdouble)W_height);
	glutPostRedisplay();
}

void drawMenuText(string text, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = text;
	glRasterPos2i(x1 + 5, y1 - 20);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawMenu()
{
	int h = W_height;

	glColor3d(0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2i(1100, h - 50);
	glVertex2i(1100, h - 100);
	glVertex2i(1300, h - 100);
	glVertex2i(1300, h - 50);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Add vertex and edget", 1100, h - 60);

	glColor3d(0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2i(1100, h - 150);
	glVertex2i(1100, h - 200);
	glVertex2i(1300, h - 200);
	glVertex2i(1300, h - 150);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Delete element", 1140, h - 160);

	glColor3d(0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2i(1100, h - 250);
	glVertex2i(1100, h - 300);
	glVertex2i(1300, h - 300);
	glVertex2i(1300, h - 250);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Print matrix", 1140, h - 260);

	glColor3d(0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2i(1100, h - 350);
	glVertex2i(1100, h - 400);
	glVertex2i(1300, h - 400);
	glVertex2i(1300, h - 350);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Get result", 1150, h - 360);

	glColor3d(0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2i(1100, h - 450);
	glVertex2i(1100, h - 500);
	glVertex2i(1300, h - 500);
	glVertex2i(1300, h - 450);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Add edge", 1150, h - 460);

	glColor3d(0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2i(1100, h - 550);
	glVertex2i(1100, h - 600);
	glVertex2i(1300, h - 600);
	glVertex2i(1300, h - 550);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("New Graph", 1150, h - 560);
}

void mouseClick(int btn, int stat, int x, int y) {

	if (stat == GLUT_DOWN) {

		if (x > 1100 && x < 1300 && y >  50 && y < 100)
		{
			int sourceVertex;
			int targetVertex;
			int edgeWeight;


			cout << "Добавление ребра к вершине: "; 
			cin >> sourceVertex;
			int* sourceVertPtr = &sourceVertex;
			cout << "Новая вершина: ";
			cin >> targetVertex;
			int* targetVertPtr = &targetVertex;

			if (sourceVertex > amountVerts || targetVertex > amountVerts) {
				amountVerts++;
				int* vertPtr = &amountVerts;
				graph.InsertVertex(*vertPtr);
			}

			cout << "Вес ребра: "; cin >> edgeWeight; cout << endl;
			graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);
			graph.Print();
		}
		if (x > 1100 && x < 1300 && y > 150 && y < 200)
		{
			int sourceVertex;

			do {
				cout << "Удаляемая вершина: ";
				cin >> sourceVertex; cout << endl;
				int* sourceVertPtr = &sourceVertex;
			} while(sourceVertex < 0);

			if (sourceVertex <= amountVerts)
			{

				graph.DeleteVertex(sourceVertex);
				amountVerts--;
				graph.Print();
			}
			else cout << "Ошибка, невозможно удалить элемент \n";
		}
		if (x > 1100 && x < 1300 && y >  250 && y < 300)
		{

			graph.Print();
		}
		if (x > 1100 && x < 1300 && y >  350 && y < 400)
		{
			road(mat, n, help, result);
		}
		if (x > 1100 && x < 1300 && y >  450 && y < 500)
		{
			int sourceVertex;
			int targetVertex;
			int edgeWeight;

			cout << "Добавление ребра к вершине: ";
			cin >> sourceVertex;
			int* sourceVertPtr = &sourceVertex;
			cout << "От вершины: ";
			cin >> targetVertex;
			int* targetVertPtr = &targetVertex;

			cout << "Вес ребра: ";
			cin >> edgeWeight;
			cout << endl;
			graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);
			graph.Print();
		}
		if (x > 1100 && x < 1300 && y >  550 && y < 600)
		{
			graph = makeGraph();
		}
	}
	glutPostRedisplay();
}

void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, W_width, 0, W_height);
	glViewport(0, 0, W_width, W_height);
	glClearColor(0.0, 0.7, 0.9, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	graph.DrawGraph();
	drawMenu();
	glutSwapBuffers();
}
