#include "SumRadius.h"

int SumRadius(vector<Circle*>& vec)
{
	int sum = 0;
	for (Circle* item : vec)
	{
		sum += item->GetRadius();
	}
	return sum;
}
