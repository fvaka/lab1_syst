// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <format>
#include "Triangle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	vector<Triangle> triangles;
	unsigned int n, i;
	double a;
	double b;
	double c;
	cout << "Введите колличество прямоугольных треугольников в массиве: ";
	cin >> n;
	i = n;
	do{
		cout << "Введите стороны для " + i << endl;
		cout << "Введите первый катет треугольника:\n";
		cin >> a;
		cout << "Введите второй катет треугольника:\n";
		cin >> b;
		cout << "Введите гипотенузу треугольника:\n";
		cin >> c;
		i++;

	} while (n);
	//printf();



	switch (n) {

	}
	cout << "Выберите операцию:\n";
	cout << "Выберите операцию:\n";
	cout << "Выберите операцию:\n";
	cout << "Выберите операцию:\n";
	cout << "Выберите операцию:\n";
	cout << "Выберите операцию:\n";
	cout << "Выберите операцию:\n";


	//delete[] triangle;

	//do {
	//    cout << "Введите стороны прямоугольного треугольника:";
	//    cin>>

	//}while
}

