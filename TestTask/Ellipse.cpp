#include "Ellipse.h"

Ellipse::Ellipse(int radius, int radius2) : Circle::Circle(radius)
{
	this->radius2 = radius2;
}

vector<double> Ellipse::Get—oordinatesPoint(double& t)
{
	double x = this->radius * cos(t);
	double y = this->radius2 * sin(t);
	double z = 0;
	return vector <double> {x, y, z};
}

vector<double> Ellipse::GetFirstDeff(double& t)
{
	double dx = this->radius * sin(t) * (-1);
	double dy = this->radius2 * cos(t);
	double dz = 0;
	return vector <double> {dx, dy, dz};
}

string Ellipse::GetTypeCurves()
{
	return "Ellipse";
}

void Ellipse::Print(double& t)
{
	cout << "Type of curve: Ellipse" << endl;
	vector <double> coordinates = this->Get—oordinatesPoint(t);
	cout << "x: " << coordinates[0] << endl;
	cout << "y: " << coordinates[1] << endl;
	cout << "z: " << coordinates[2] << endl;
	vector <double> deff = this->GetFirstDeff(t);
	cout << "dx: " << deff[0] << endl;
	cout << "dy: " << deff[1] << endl;
	cout << "dz: " << deff[2] << endl;
	cout << "radius: " << this->radius << endl;
	cout << "radius2: " << this->radius2 << endl;
	cout << endl;
}
