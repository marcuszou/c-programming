#include <stdio.h>
#include <string.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address =  the address of where a memory block is located (house address)

    // hexadecimal = 16 alphadigits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, A, B, C, D, E, F 

    // Bytes needed for different data types:
    // char:    1 byte
    // short:   2 bytes
    // int:     4 bytes
    // double:  8 bytes
    // array:   bytes-of-the-data-type * data-size

    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    short d[3];
    int e[5];

    printf("%lu bytes\n", sizeof(a));
    printf("%lu bytes\n", sizeof(b));
    printf("%lu bytes\n", sizeof(c));
    printf("%lu bytes\n", sizeof(d));
    printf("%lu bytes\n", sizeof(e));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);

    return 0;
}