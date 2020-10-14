// exercices_cpp_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Rendu Valentin Fonderflick

#include <iostream>
#include "vect3D.h"
#include "vect.h"
#include "matrice.h"

using namespace std;

int main()
{
    vect3D vect1(0, 1, 2);
    vect3D vect2(3, 2, 2);
    cout << "Plus grande norme entre v1 et v2 : ";
    vect1.normax(&vect2)->afficher();
    cout << "scalaire v1 et v2 : " << vect1.scalaire(vect2) << endl;
    


    //83
    cout << endl << "Vecteur / matrice ex 83" << endl;
    vect v(1, 3, 2);
    matrice ma;
    
    v.show();
    ma.show();

    vect prodV = prod(ma, v);
    prodV.show();
}

