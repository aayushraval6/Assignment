#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", (i + j) % 2);
        }

        printf("\n");
    }


}
