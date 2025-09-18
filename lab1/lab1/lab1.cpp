
#include <iostream>
#include <vector>
#include <string>
#include "Triangle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	vector<Triangle> triangles;
	Triangle tr;
	unsigned int n, i, action, rk = 0;
	double a;
	double b;
	double c;
	double side;
	double angle;
	printf("Введите колличество прямоугольных треугольников в массиве: ");
	cin >> n;
	i = n;
	do {
		cout << "Введите стороны для " + i << endl;
		cout << "Введите сторону прямоугольного треугольника:\n";
		cin >> side;
		cout << "Введите угол прямоугольного треугольника:\n";
		cin >> angle;
		i++;
		rk++;
		tr = Triangle(side, angle);
		triangles = { tr };
	} while (n > rk);
	//printf();

	//cout << tr;
	do 
	{
		cout << "Выберите действие, которое необходимо выпонить: \n";
		cout << R"(1. Увеличить размер стороны
2. Уменьшить размер стороны.
3. Вычислить радиус вписанной окружности.
4. Определить расстояние между центрами вписанной и описанной окружностей.
5. Вычислить квадратный корень из площади.
6. Определить значение сторон.)" << endl;
		cin >> action;

	} while (n);


	switch (action) {
	case 1:
		tr.findAnotherSides(side, angle);
		break;
	case 2:
		break;
	case 3:
		break;	
	case 4:
		break;	
	case 5:
		break;	
	case 6:
		break;
	case 7:
		break;
	default:
		break;
	}
}


