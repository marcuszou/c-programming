#include <stdio.h>

int main()
{

    FILE *pF = fopen("test.txt", "a"); // "w" for writting, "r" for read-only, "a" for appending

    // fprintf(pF, "Patrick Star");  // write the first line
    fprintf(pF, "\nSpongebob Squarepants"); // append the second line

    fclose(pF);

    /*
    // remove operation
    if(remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was NOT deleted!");
    }
    */

    return 0;
}