#pragma onse
#ifndef _HELIXE_H_
#define _HELIXE_H_

#include "Circle.h"

// A class describing helixes
class Helixe : public Circle
{
	int step;

public:
	Helixe(int radius, int step);

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
