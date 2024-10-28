#include <stdio.h>

int main()
{
    // continue = skips rest of teh code and forces the next iteration of the code
    // break= exits a lop/swicth

    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            //continue;
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}