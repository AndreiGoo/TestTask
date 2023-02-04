#include "Circle.h"

Circle::Circle(int radius)
{
	this->radius = radius;
}

vector<double> Circle::Get—oordinatesPoint(double& t)
{
	double x = this->radius * cos(t);
	double y = this->radius * sin(t);
	double z = 0;
	return vector <double> {x, y, z};
}

vector<double> Circle::GetFirstDeff(double& t)
{
	double dx = this->radius * sin(t) * (-1);
	double dy = this->radius * cos(t);
	double dz = 0;
	return vector <double> {dx, dy, dz};
}

string Circle::GetTypeCurves()
{
	return "Circle";
}

void Circle::Print(double& t)
{
	cout << "Type of curve: Circle" << endl;
	vector <double> coordinates = this->Get—oordinatesPoint(t);
	cout << "x: " << coordinates[0] << endl;
	cout << "y: " << coordinates[1] << endl;
	cout << "z: " << coordinates[2] << endl;
	vector <double> deff = this->GetFirstDeff(t);
	cout << "dx: " << deff[0] << endl;
	cout << "dy: " << deff[1] << endl;
	cout << "dz: " << deff[2] << endl;
	cout << "radius: " << this->radius << endl;
	cout << endl;
}

int Circle::GetRadius()
{
	return this->radius;
}
