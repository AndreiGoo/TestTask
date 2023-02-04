#include "GetCircleVector.h"

vector<Circle*> GetCircleVector(vector<Circle*>& first_vec, vector<int>& id_circle)
{
	vector <Circle*> second_vec{};
	int id = 0;
	for (Circle* item : first_vec)
	{
		if (item->GetTypeCurves() == "Circle")
		{
			second_vec.push_back(item);
			id_circle.push_back(id);
		}
		id++;
	}
	return second_vec;
}
