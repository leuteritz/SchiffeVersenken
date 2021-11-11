#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
    srand((unsigned)time(NULL));

    int size = 10;
    int *lookup = (int *)malloc(size * sizeof(int));

    for (int i = 1; i < size; i++)
    {
        lookup[i] = i;
    }

    for (int i = 1; i < size; i++)
    {
        printf("%d\t", lookup[i]);
    }

    printf("\n");
    printf("\n");


    int pos = lookup[rand() % (size + 1 - 0) + 0];

    printf("%d\n", pos);

    printf("\n");

    for (int i = pos; i < size; i++)
    {
        lookup[i] = lookup[i + 1];
    }
    size--;


    for (int i = 1; i < size; i++)
    {
        printf("%d\t", lookup[i]);
    }

    pos = lookup[rand() % (size + 1 - 0) + 0];

    printf("\n");
    printf("\n");


    printf("%d\n", pos);

    printf("\n");

    for (int i = pos - 1; i < size; i++)
    {
        lookup[i] = lookup[i + 1];
    }
    size--;


    for (int i = 1; i < size; i++)
    {
        printf("%d\t", lookup[i]);
    }

    return 0;
}
