#include "vect3D.h"

vect3D::vect3D()
{
	nb++;
	cout << "Nouveau vect3D(" << nb << ") null " << endl;
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

bool vect3D::coincide(float x, float y, float z)
{
	if (this->x == x && this->y == y && this->z == z)
		return true;
	return false;
}

bool vect3D::coincide(vect3D* v)
{
	if (this->x == v->x && this->y == v->y && this->z == v->z)
		return true;
	return false;
}

bool vect3D::coincide(vect3D& v)
{
	if (this->x == v.x && this->y == v.y && this->z == v.z)
		return true;
	return false;
}

vect3D vect3D::normax(vect3D v)
{
	if(this->getNorm() > v.getNorm())
		return *this;

	return v;
}

vect3D& vect3D::normax(vect3D &v)
{
	if(this->getNorm() > v.getNorm())
		return *this;

	return v;
}

vect3D* vect3D::normax(vect3D *v)
{
	if(this->getNorm() > v->getNorm())
		return this;

	return v;
}

vect3D vect3D::minus(vect3D v)
{
	vect3D newVect(this->x - v.x, this->y - v.y, this->z - v.z);
	return newVect;
}

float vect3D::scalaire(vect3D v)
{
	return (this->getNorm()*this->getNorm() + v.getNorm() * v.getNorm() - this->minus(v).getNorm() * this->minus(v).getNorm())/2;
}

vect3D vect3D::add(vect3D v)
{
	vect3D newVect(this->x + v.x, this->y + v.y, this->z + v.z);
	return newVect;
}

void vect3D::afficher()
{
	cout << "vect x: " << this->x << " y: " << this->y << " z : " << this->z << endl;
}

float vect3D::getNorm()
{
	return sqrt(this->x * this->x + this->y*this->y + this->z * this->z);
}
