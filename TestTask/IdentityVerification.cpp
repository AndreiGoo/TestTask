#include "IdentityVerification.h"

void IdentityVerification(vector<Circle*>& first_vector, vector<Circle*>& second_vector, vector<int>& id_first_vec)
{
	if (second_vector.empty())
	{
		cout << "Verification is not possible. The second vector is empty" << endl;
		return;
	}
	int id_second_vec = 0;
	for (int item : id_first_vec)
	{
		// Equality of pointers to objects will prove that they are the same object
		if (first_vector[item] != second_vector[id_second_vec])
		{
			cout << "ERROR!!! IT 'S A CLONE !!!" << endl;
			return;
		}
		id_second_vec++;
	}
	cout << "Verification passed successfully. These are the same circles" << endl;
}
