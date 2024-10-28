#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checj a condition
    // a while loop might not execute at all

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);
    

    printf("Sum: %d\n", sum);

    return 0;
}