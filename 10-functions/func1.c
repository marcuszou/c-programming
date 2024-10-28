#include <stdio.h>

void birthday(char name[], int age)  // name and age are parameters
{
    printf("\nhappy birthday to you!");
    printf("\nhappy birthday to you!");
    printf("\nhappy birthday dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main() {

    char name[] = "Bro";
    int age = 21;

    birthday(name, age); // name and age are arguments
    birthday("Mike", 35);

    return 0;
}