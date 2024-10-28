#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{
    // function prototype

    // WHAT IS IT?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORT NOTES
    // many C compilers do NOT check for parameter matching
    // Missing arguments will result in unexpected behavoir
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    char name[] = "Marcus";
    int age = 35;

    // hello(name); // test the errorous outputs by uncommenting this line and commenting the line below & the line of function prototype above 
    hello(name, age);

    return 0;

}

void hello(char name[], int age)
{
    printf("Hello %s,\n", name);
    printf("You are %d years old.\n", age);
}