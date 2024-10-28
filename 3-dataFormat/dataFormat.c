#include <stdio.h>

int main(){

    // format specifier %
    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left alignment


    float item1 =  5.75;
    float item2 = 45.00;
    float item3 = 100.99;

    printf("item 1: %8.2f\n", item1);
    printf("item 2: %8.2f\n", item2);
    printf("item 3: %8.2f\n", item3);

    return 0;

}