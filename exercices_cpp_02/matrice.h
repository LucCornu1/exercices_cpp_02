#pragma once

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#define A 3
#define B 3

class vect;
class matrice
{
private:
	double values[A][B];

public:
	matrice();
	void show();
	friend vect prod(matrice& m, vect& v);
};

