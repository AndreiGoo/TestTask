#pragma once
#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
#include <vector>
#include <string>

#define PI atan(1) * 4

using namespace std;

// A class describing circles
class Circle
{
protected:
	int radius;
public:
	Circle(int radius);

	// Calculation of the coordinates of a point
	// at a given value of the parameter t
	virtual vector <double> Get—oordinatesPoint(double& t);

	// Calculation of the first derivative at a given value
	// of the parameter t
	virtual vector <double> GetFirstDeff(double& t);

	// Get the curve type
	virtual string GetTypeCurves();

	// Output of information about the curve, the coordinates of the point
	// and the first derivative at a given value of the parameter t
	virtual void Print(double& t);

private:
	// Returns the radius of the circle
	int GetRadius();

	friend int SumRadius(vector <Circle*>& vec);
	friend void SortVector(vector <Circle*>& vec);
};

#endif