#include "friends.h"
#include "vect3D.h"

bool friends::coincide(vect3D& v1, vect3D& v2)
{
    if (v1.x == v2.x && v2.y == v1.y && v1.z == v2.z)
    {
        return true;
    }
    return false;
}

