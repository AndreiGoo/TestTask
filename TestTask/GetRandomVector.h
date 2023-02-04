#pragma onse
#ifndef _GETRANDOMVECTOR_H_
#define _GETRANDOMVECTOR_H_

#include "Circle.h"
#include "Ellipse.h"
#include "Helixe.h"
#include "GetRandomNumber.h"

// Filling a vector with random curves
void GetRandomVector(vector <Circle*>& vec, int& count, int& min_radius, int& max_radius);

#endif