#include "Helixe.h"

Helixe::Helixe(int radius, int step) : Circle::Circle(radius)
{
	this->step = step;
}

vector<double> Helixe::Get—oordinatesPoint(double& t)
{
	double x = this->radius * cos(t);
	double y = this->radius * sin(t);
	double z = this->step * t / (2 * PI);
	return vector <double> {x, y, z};
}

vector<double> Helixe::GetFirstDeff(double& t)
{
	double dx = this->radius * sin(t) * (-1);
	double dy = this->radius * cos(t);
	double dz = this->step / (2 * PI);
	return vector <double> {dx, dy, dz};
}

string Helixe::GetTypeCurves()
{
	return "Helixe";
}

void Helixe::Print(double& t)
{
	cout << "Type of curve: Helixe" << endl;
	vector <double> coordinates = this->Get—oordinatesPoint(t);
	cout << "x: " << coordinates[0] << endl;
	cout << "y: " << coordinates[1] << endl;
	cout << "z: " << coordinates[2] << endl;
	vector <double> deff = this->GetFirstDeff(t);
	cout << "dx: " << deff[0] << endl;
	cout << "dy: " << deff[1] << endl;
	cout << "dz: " << deff[2] << endl;
	cout << "radius: " << this->radius << endl;
	cout << "step: " << this->step << endl;
	cout << endl;
}
