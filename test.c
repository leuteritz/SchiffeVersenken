#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int checkNumber(int *lookup, int *size, int randomNumber)
{
    int counter = 0;
    for (int i = 0; i < *size; i++)
    {
        if (lookup[i] == randomNumber)
        {
            return counter;
        }
        counter++;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = 9;
    int *lookup = (int *)malloc((unsigned long)size * sizeof(int));

    for (int i = 0; i < size; i++)

    {
        lookup[i] = i + 1;
    }

    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", lookup[i]);
        }

        printf("\n");
        printf("\n");


        int pos = lookup[(rand() % size)];

        printf("RandomNumber: %d\n", pos);

        printf("\n");

        int a = checkNumber(lookup, &size, pos);

        printf("NumberPosition: %d\n", a);
        printf("\n");
        printf("\n");
        printf("\n");

        for (int i = a; i < size; i++)
        {
            lookup[i] = lookup[i + 1];
        }
        size--;
    }


    return 0;
}
