#pragma once
#include <iostream>
#include "cmath"
#include <string>

class Triangle
{
	double side = 0;
	double angle = 0;

	double a = 0;
	double b = 0;
	double c = 0;
public:
	Triangle(double c_side, double c_angle) : side(c_side), angle(c_angle){}
	Triangle();
	// methods 

	void Increase(unsigned int side, unsigned int percent);
	void Decrease(unsigned int side, unsigned int percent);
	double radiousCalc(int a, int b, int c);
	double squareFromAreaCalc(int a, double h);

	//void showMethod(string str);
	double findAnotherSides(double side, double angle);

};
