#pragma once

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#define a 3
#define b 3

class vect;
class matrice
{
private:
	double values[a][b];

public:
	matrice();
	void show();
	vect prod(vect& v);
};

