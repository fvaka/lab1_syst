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

	void Increase(unsigned int side, unsigned int percent) {
		
		// number to increase with 
		int increaseNum = percent / 100 * side;

		side += increaseNum;
	}
	
	void Decrease(unsigned int side, unsigned int percent) {
		// number to decrease with 
		int decreaseNum = percent / 100 * side;

		side -= decreaseNum;
	}

	double radiousCalc() {
		return (a+b-c)/2;
	}
	 
	double squareFromAreaCalc(int a, double h) {
		return std::sqrt((a, h) / 2);
	}
	



};

