#include <stdio.h>

int main()
{
    // 2D array = an array, where each element is an empty array
    //            useful if you need a matrix, grid, or a table of data.

    int numbers[4][3] = {
                            {1, 2, 3}, 
                            {4, 5, 6},
                            {7, 8, 9},
                            {10, 11, 12}
                        };

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns =  sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}