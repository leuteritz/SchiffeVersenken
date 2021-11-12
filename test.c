#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char numberLookup[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    srand((unsigned)time(NULL));

    int max = 9;
    int min = 1;

    char randomNumber = numberLookup[rand() / (RAND_MAX / (max - min + 1) + 1)];

    printf("%c\n", randomNumber);
}
