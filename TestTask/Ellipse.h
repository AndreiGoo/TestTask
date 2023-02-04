#pragma once
#ifndef _ELLIPSE_H_
#define _ELLIPSE_H_

#include "Circle.h"

// A class describing ellipses
class Ellipse : public Circle
{
	int radius2;

public:
	Ellipse(int radius, int radius2);

	// Calculation of the coordinates of a point at a given value
	// of the parameter t
	vector <double> Get—oordinatesPoint(double& t) override;

	// Calculation of the first derivative at a given value
	// of the parameter t
	vector <double> GetFirstDeff(double& t) override;

	// Get the curve type
	string GetTypeCurves() override;

	// Output of information about the curve, the coordinates of the point
	// and the first derivative at a given value of the parameter t
	void Print(double& t) override;
};

#endif
