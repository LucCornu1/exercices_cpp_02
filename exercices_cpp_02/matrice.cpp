#include "matrice.h"
#include "vect.h"   

using namespace std;
matrice::matrice()
{
    srand(time(NULL));
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            this->values[i][j] = (double)(rand() % 1000 - 500) / 10;
        }
    }
}

void matrice::show()
{
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
            cout << this->values[i][j] << " ";
        cout << endl;
    }

}

vect prod(matrice& m, vect& v)
{
    vect prodV(0, 0, 0);
    for (int i = 0; i < A; i++)
    {
         prodV.x += m.values[i][0] * v.x;
         prodV.y += m.values[i][1] * v.y;
         prodV.z += m.values[i][2] * v.z;
    }

    return prodV;
}
