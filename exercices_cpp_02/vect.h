#pragma once
#include "matrice.h"
#include <iostream>

class matrice;
class vect
{
private:
	double x, y, z;

public:
	vect();
	vect(double x, double y, double z);
	void show();

	friend vect matrice::prod(vect& v);
};

