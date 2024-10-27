#include <stdio.h>
#include <math.h>

int main(){

    // constant - a fixed value that can not be altered by the program during the execution

    const float PI = 3.14159;
    float radius = 25.00;

    float area = PI * pow(radius, 2);

    printf("Radius: %8.2f\n", radius);
    printf("Area  : %8.2f\n", area);

    return 0;

}