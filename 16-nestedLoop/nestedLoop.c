#include <stdio.h>
#include <string.h>

int main()
{
    //nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    scanf("%c", &symbol);   // Get rid of "\n" from the line above

    printf("Enter a symbol to print: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}