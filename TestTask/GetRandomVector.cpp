#include "GetRandomVector.h"

void GetRandomVector(vector<Circle*>& vec, int& count, int& min_radius, int& max_radius)
{
	for (int item = 0; item != count; ++item)
	{
		int indicator = GetRandomNumber(1, 3);
		if (indicator == 1)
		{
			vec.push_back(new Circle(GetRandomNumber(min_radius, max_radius)));
		}
		else if (indicator == 2)
		{
			vec.push_back(new Ellipse(GetRandomNumber(min_radius, max_radius),
									  GetRandomNumber(min_radius, max_radius)));
		}
		else
		{
			vec.push_back(new Helixe(GetRandomNumber(min_radius, max_radius),
									 GetRandomNumber(min_radius, max_radius)));
		}
	}
}
