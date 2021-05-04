// this complies files, for c= files, after getting the hypotenuse and side lengths
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
double hypotenuse( int a, int b);

int main(int argc, char* argv[])
{
    int a, b, maximum_c;
    double c;

    double epsilon = 1e-3;
    if (argc == 1) {
       maximum_c = 50;
    } else {
       maximum_c = atoi(argv[1]);
    }

    for (a = 1; a < maximum_c; a++) {
        for (b = a; b < maximum_c; b++) {
            c = hypotenuse(a, b);
            if ( (c <= (double)(maximum_c) ) &&
                 (c - floor(c) < epsilon ) ) {
               printf("%4d%4d%4d\n", a, b, (int)c);
            }
        }
    }
    return 0;
}

//cc "files" -lm
// ./a.out wc -l

//cc "files name" -lm -o triples2.x
// ./triples2.x 5  