#include "vect.h"
using namespace std;
vect::vect()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

vect::vect(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void vect::show()
{
	cout << "vect x: " << this->x << " y: " << this->y << " z: " << this->z << endl;
}
