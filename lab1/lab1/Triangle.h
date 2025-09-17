#pragma once
#include <iostream>
#include "cmath"
class Triangle
{
	double side = 0;
	double angle = 0;

	double a = 0;
	double b = 0;
	double c = 0;
public:
	Triangle(double c_side, double c_angle) : side(c_side), angle(c_angle){}

	// methods 

	void Increase(unsigned int side, unsigned int percent);
	void Decrease(unsigned int side, unsigned int percent);
	double radiousCalc();
	double squareFromAreaCalc(int a, double h);




};
