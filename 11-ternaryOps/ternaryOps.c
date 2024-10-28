#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    // ternary operator -
    // (condition) ? value if true : value if flase

    int max = findMax(3, 4);
    printf("%d\n", max);

    return 0;
}