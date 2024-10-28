#include <stdio.h>

// return statement in function
// tHe data type ("int" in the square function) has to match what "return" reflects.

double square(double x)  
{
    return x * x;
}

int main() {

    double x = square(3.14);

    printf("%lf\n", x);

    return 0;
}