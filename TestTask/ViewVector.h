#pragma onse
#ifndef _VIEWVECTOR_H_
#define _VIEWVECTOR_H_

#include "Circle.h" 
#include "Ellipse.h"
#include "Helixe.h"

// Function for viewing information about curves in a vector
// and the coordinates of the point and the first derivative
// at a given value of the parameter t
void ViewVector(vector <Circle*>& vec, double& t);

#endif