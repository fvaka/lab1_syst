
#include "Triangle.h"
using namespace std;


void Triangle::Increase(unsigned int side, unsigned int percent) 
{

	int increaseNum = percent / 100 * side;

	side += increaseNum;
}

void  Triangle::Decrease(unsigned int side, unsigned int percent) 
{
	int decreaseNum = percent / 100 * side;

	side -= decreaseNum;
}

double Triangle::radiousCalc(int a, int b, int c) 
{
	return (a + b - c) / 2;
}

double Triangle::squareFromAreaCalc(int a, double h) 
{
	return sqrt((a, h) / 2);
}

//void Triangle::showMethod(string str) 
//{
//
//	cout << "врап";
//}

double Triangle::findAnotherSides(double side, double angle)
{
	return side / tan(angle);
}