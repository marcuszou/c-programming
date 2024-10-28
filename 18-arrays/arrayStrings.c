#include <stdio.h>
#include <string.h>

int main()
{
    // Array of strings

    char cars[][10] = {"Mustang", "Corvette","Camero"};

    //cars[0] = "Tesla"; // Doesn't work
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}