#include "ViewVector.h"

void ViewVector(vector<Circle*>& vec, double& t)
{
	if (vec.empty())
	{
		cout << "Vector empty" << endl;
	}
	else
	{
		for (Circle* item : vec)
		{
			item->Print(t);
		}
	}
}
