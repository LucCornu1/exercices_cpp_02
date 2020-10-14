// exercices_cpp_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Rendu Valentin Fonderflick

#include <iostream>
#include "vect3D.h"

using namespace std;

int main()
{
    vect3D vect1(0, 1, 2);
    vect3D vect2(3, 2, 2);
    cout << "Plus grande norme entre v1 et v2 : ";
    vect1.normax(&vect2)->afficher();
    cout << "scalaire v1 et v2 : " << vect1.scalaire(vect2) << endl;
}

