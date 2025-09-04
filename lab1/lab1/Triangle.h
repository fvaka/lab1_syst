#pragma once
#include <iostream>
#include "cmath"
class Triangle
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;
	unsigned int angle = 0;

public:
	Triangle(unsigned int c_a, unsigned int c_b, unsigned int c_c) : a(c_a), b(c_b), c(c_c) {}

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

