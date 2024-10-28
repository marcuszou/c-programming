#include <stdio.h>
#include <stdbool.h>

int main() {

    // Logical Operator = && (and), || (or), ! (not)
    char grade;

    float temp = 25;
    bool sunny = true;

    float polarTemp = -40;

    if (temp >= 0 && temp <= 30 && sunny) {
        printf("\nThe weather is good!\n");
    }
    else {
        printf("\nThe weather is bad!\n");
    }

    if(polarTemp <= 0 || polarTemp >= 30) {
        printf("\nThe weather is bad!\n");
    }
    else {
        printf("\nThe weather is good!\n");
    }

    if (!sunny) {
        printf("\nIt's cloudy outside!\n");
    }
    else {
        printf("\nit's sunny outside!\n");
    }

    return 0;
}