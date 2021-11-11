#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
    srand((unsigned)time(NULL));


    int lookup[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    for (int i = 0; i < 15; i++)
    {
        printf("%d\t", lookup[i]);
    }

    printf("\n");
    printf("\n");

    int pos = lookup[rand() % (15 + 0 - 2) + 0];

    printf("%d\n", pos);

    printf("\n");

    for (int i = pos - 1; i < 15 - 1; i++)
    {
        lookup[i] = lookup[i + 1];
    }


    for (int i = 0; i < 15 - 1; i++)
    {
        printf("%d\t", lookup[i]);
    }

    return 0;
}
