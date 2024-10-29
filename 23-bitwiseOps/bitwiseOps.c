#include <stdio.h>

int main()
{
    // BITWISE OPERATIONS = special operations used in bit level programming
    //                      (knowing binary s impoertant for this topic)
    
    // & = AND
    // | = OR
    // ^ = XOR (exclusive OR)
    // << left shift
    // >> right shift
    // ~ complement // No demo on this program

    int x = 6;   // 6 = 00000110
    int y = 12;  //12 = 00001100
    int z = 0;   // 0 = 00000000

    z = x & y;
    printf("AND Ops = %d\n", z);  // z = 4 = 00000100

    z = x | y;
    printf("OR Ops = %d\n", z);  // z = 14 = 00001110

    z = x ^ y;
    printf("XOR Ops = %d\n", z);  // z = 10 = 00001010

    z = x << 2;
    printf("SHIFT LEFT Ops = %d\n", z);  // z = 24 = 00011000

    z = x >> 1;
    printf("SHIFT RIGHT Ops = %d\n", z);  // z = 3 = 00000011

    return 0;
}