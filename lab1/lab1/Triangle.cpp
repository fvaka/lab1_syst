
#include "Triangle.h"

void Triangle::Increase(unsigned int side, unsigned int percent) {

	int increaseNum = percent / 100 * side;

	side += increaseNum;
}

void  Triangle::Decrease(unsigned int side, unsigned int percent) {
	int decreaseNum = percent / 100 * side;

	side -= decreaseNum;
}

double radiousCalc(int a, int b, int c) {
	return (a + b - c) / 2;
}

double squareFromAreaCalc(int a, double h) {
	return std::sqrt((a, h) / 2);
}