#pragma onse
#ifndef _IDENTITYVERIFICATION_H_
#define _IDENTITYVERIFICATION_H_

#include "Circle.h"

// Checking that the second vector shares the circles of the first one
void IdentityVerification(vector <Circle*>& first_vector,
	vector <Circle*>& second_vector, vector <int>& id_first_vec);
#endif