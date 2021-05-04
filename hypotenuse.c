//this calculates the hypotenuse for the different triangles and returns them back to the calculate_pythagoeresn_triples.c file
#include <math.h>


double hypotenuse(int a, int b)
{
    double c;

    c = sqrt(pow((double)a, 2) + pow((double)b, 2));
    return c;
}
