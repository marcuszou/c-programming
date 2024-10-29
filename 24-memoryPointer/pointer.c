#include <stdio.h>

void printAge(int *pAge)
{
    printf("\nYou are %d years old\n", *pAge);  // dereference
}

int main()
{
    // pointer = a "variable-like" refeerence that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    // Adcantages of Using Pointers:
    // - Less time in program execution.
    // - Working on the original variable.
    // - With the help of pointers, we can create data structures (linked-list, stack, queue).
    // - Returning more than ne values from functions.
    // - Searching and sorting large data very easily.
    // - Dynamically memory allocation.

    int age = 21;
    int *pAge = NULL;  // Good practice to assign NULL if declaring a pointer
    pAge = &age;

    /*
    printf("address of age: %p\n", &age);
    printf("address of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));  // pointer takes 8 bytes to contain the hexadecimal value

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);
    */
    printAge(pAge);

    return 0;
}