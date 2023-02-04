#include "Circle.h"
#include "Ellipse.h"
#include "Helixe.h"

#include "GetCircleVector.h"
#include "GetRandomNumber.h"
#include "GetRandomVector.h"
#include "IdentityVerification.h"
#include "SortVector.h"
#include "SumRadius.h"
#include "ViewVector.h"

#include <ctime>

int main()
{
	srand((unsigned)time(NULL));

	// The count of random curves in the vector
	int count = 5;

	// Minimum radius for curves (step for helixes)
	int min_radius = 1;

	// Maximum radius for curves (step for helixes)
	int max_radius = 10;

	// The value of the parameter t
	double t = PI / 4;

	cout << "The first vector\n\n";

	// Create an empty vector to fill with random curves
	vector <Circle*> first_vector;
	GetRandomVector(first_vector, count, min_radius, max_radius);

	// Print coordinates of points and derivatives of all curves in the vector at t=PI/4
	ViewVector(first_vector, t);

	cout << "\nThe second vector\n\n";

	// Create an empty vector to fill with circles from the first vector
	vector <Circle*> second_vector{};

	// Create an empty vector to record the id of the circles from the first vector
	vector <int> id_circle;
	second_vector = GetCircleVector(first_vector, id_circle);
	ViewVector(second_vector, t);

	// Let's make sure the second vector shares circles of the first one
	IdentityVerification(first_vector, second_vector, id_circle);

	cout << "\nSorted second vector\n\n";

	// Let's sort the second vector in ascending order of radii
	SortVector(second_vector);
	ViewVector(second_vector, t);

	// Calculate the sum of the radii of the circles in the second vector
	int sum_radius = SumRadius(second_vector);
	cout << "\nThe sum of the radii of the circles in the second vector is: " << sum_radius << endl;
}