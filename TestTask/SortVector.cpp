#include "SortVector.h"

void SortVector(vector<Circle*>& vec)
{
	sort(vec.begin(), vec.end(), [](Circle*& smaller, Circle*& bigger)
		{
			return smaller->GetRadius() < bigger->GetRadius();
		});
}
