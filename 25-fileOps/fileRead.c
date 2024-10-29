#include <stdio.h>

int main()
{

    FILE *pF = fopen("/home/zenusr/projects/c-programming-brocode/poem.txt", "r"); // "r" for read-only
    char buffer[255];

    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        printf("\n");
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
        printf("\n\n");
    }

    fclose(pF); // Do not dereference it

    return 0;
}