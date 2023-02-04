#include "GetRandomNumber.h"

int GetRandomNumber(int min, int max)
{
    return min + (rand() % (max - min + 1));
}
