#include "matrice.h"
#include "vect.h"   

using namespace std;
matrice::matrice()
{
    srand(time(NULL));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            this->values[i][j] = (double)(rand() % 1000 - 500) / 10;
        }
    }
}

void matrice::show()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cout << this->values[i][j] << " ";
        cout << endl;
    }

}

vect matrice::prod(vect& v)
{
    vect prodV(0, 0, 0);
    for (int i = 0; i < a; i++)
    {
         prodV.x += this->values[i][0] * v.x;
         prodV.y += this->values[i][1] * v.y;
         prodV.z += this->values[i][2] * v.z;
    }

    return prodV;
}
