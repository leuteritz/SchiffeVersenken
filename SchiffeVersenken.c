#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SHIP2_LEN 2
#define SHIP3_LEN 3
#define SHIP4_LEN 4
#define SHIP5_LEN 5

void printBoard(char *board)
{
    // char board[100][3] = {
    //     "A1", "A2",  "A3",  "A4", "A5",  "A6",  "A7", "A8", "A9",  "A10", "B1", "B2",  "B3",  "B4", "B5",  "B6",  "B7",
    //     "B8", "B9",  "B10", "C1", "C2",  "C3",  "C4", "C5", "C6",  "C7",  "C8", "C9",  "C10", "D1", "D2",  "D3",  "D4",
    //     "D5", "D6",  "D7",  "D8", "D9",  "D10", "E1", "E2", "E3",  "E4",  "E5", "E6",  "E7",  "E8", "E9",  "E10", "F1",
    //     "F2", "F3",  "F4",  "F5", "F6",  "F7",  "F8", "F9", "F10", "G1",  "G2", "G3",  "G4",  "G5", "G6",  "G7",  "G8",
    //     "G9", "G10", "H1",  "H2", "H3",  "H4",  "H5", "H6", "H7",  "H8",  "H9", "H10", "I1",  "I2", "I3",  "I4",  "I5",
    //     "I6", "I7",  "I8",  "I9", "I10", "J1",  "J2", "J3", "J4",  "J5",  "J6", "J7",  "J8",  "J9", "J10",
    // };


    printf("---------------------------------------------\n");
    printf("|_| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | X |_|\n");
    printf("|A|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|A|\n", board[0], board[1], board[2], board[3],
           board[4], board[5], board[6], board[7], board[8], board[9]);
    printf("|B|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|B|\n", board[10], board[11], board[12], board[13],
           board[14], board[15], board[16], board[17], board[18], board[19]);
    printf("|C|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|C|\n", board[20], board[21], board[22], board[23],
           board[24], board[25], board[26], board[27], board[28], board[29]);
    printf("|D|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|D|\n", board[30], board[31], board[32], board[33],
           board[34], board[35], board[36], board[37], board[38], board[39]);
    printf("|E|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|E|\n", board[40], board[41], board[42], board[43],
           board[44], board[45], board[46], board[47], board[48], board[49]);
    printf("|F|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|F|\n", board[50], board[51], board[52], board[53],
           board[54], board[55], board[56], board[57], board[58], board[59]);
    printf("|G|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|G|\n", board[60], board[61], board[62], board[63],
           board[64], board[65], board[66], board[67], board[68], board[69]);
    printf("|H|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|H|\n", board[70], board[71], board[72], board[73],
           board[74], board[75], board[76], board[77], board[78], board[79]);
    printf("|I|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|I|\n", board[80], board[81], board[82], board[83],
           board[84], board[85], board[86], board[87], board[88], board[89]);
    printf("|J|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|J|\n", board[90], board[91], board[92], board[93],
           board[94], board[95], board[96], board[97], board[98], board[99]);
    printf("|_| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | X |_|\n");
    printf("---------------------------------------------\n");
}

int userShipStart()
{
    char userInputLetter;
    char userInputNumber;
    int temp1;
    int temp2;

    char LookupLetter[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char LookupNumber[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

    printf("Where do you want to place a ship (A-J): ");
    scanf(" %c", &userInputLetter);
    printf("Where do you want to place a ship (1-X): ");
    scanf(" %c", &userInputNumber);

    for (int i = 0; i < 10; i++)
    {
        if (userInputLetter == LookupLetter[i])
        {
            temp1 = i;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (userInputNumber == LookupNumber[i])
        {
            temp2 = i;
        }
    }

    char temp3[10];
    char temp4[10];
    sprintf(temp3, "%d", temp1); // Umwandeln temp 1 int -> char, abspeichern in temp 3
    sprintf(temp4, "%d", temp2); // Umwandeln temp 2 int -> char, abspeichern in temp 4
    strcat(temp3, temp4);        // Zusammenfügen temp 3 && temp 4 in temp 3
    int temp5 = atoi(temp3);     // Umwandeln temp 3 char -> int, abspeichern in temp 5

    return temp5;
}

int roundIntNumber(int userInput) // Funktion um eine Zahl auf die nächste 10er Zahl zu runden (z.B. 33 -> 40; 27 -> 30)
{
    int lastNumber = userInput % 10;
    int fullNumber = userInput - lastNumber;
    int nextFullNumber = fullNumber + 10;

    return nextFullNumber;
}

void shipPlacement(int shipStartPoint, char *board, int *ship2Amount, int ship3Amount, int ship4Amount, int ship5Amount)
{
    char Ship2[SHIP2_LEN] = {'I', 'I'};
    char Ship3[SHIP3_LEN] = {'I', 'o', 'I'};
    char Ship4[SHIP4_LEN] = {'I', 'o', 'o', 'I'};
    char Ship5[SHIP5_LEN] = {'I', 'o', 'o', 'o', 'I'};

    int userShipSize;       // Welches Schiff (Schiffsgröße)
    int userDirectionValue; // Welche Richtung (Horizontal, vertikal)


    printf("Which ship would you like to place (2-5): ");
    scanf("%d", &userShipSize);
    printf("0 = vertical  / 1 = horizontal\n");
    scanf(" %d", &userDirectionValue);


    int nextFullNumber = roundIntNumber(shipStartPoint);

    int temp = 0;


    if (userDirectionValue == 1) // waagerecht
    {
        switch (userShipSize)
        {
        case 2:
            if (*ship2Amount > 0)
            {
                for (int i = 0; i < SHIP2_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
                {
                    if (board[shipStartPoint + i] != ' ')
                    {
                        temp = 1;
                    }
                }
                if (temp == 0) // Wenn kein Schiff vorhanden ist
                {
                    if (shipStartPoint + SHIP2_LEN >= nextFullNumber) // Überprüfen ob ein Schiff zu lang ist
                    {
                        printf("Ship is too long!\n");
                    }
                    else
                    {
                        for (int j = 0; j < SHIP2_LEN; j++)
                        {
                            board[shipStartPoint + j] = Ship2[j];
                        }
                        *ship2Amount -= 1;
                    }
                }
                else
                {
                    printf("There is already a ship there!\n");
                    temp = 0;
                }
            }
            else
            {
                printf("You dont have enough ships left!\n");
            }
            break;
        case 3:
            for (int i = 0; i < SHIP3_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + SHIP3_LEN > nextFullNumber) // Überprüfen ob ein Schiff zu lang ist
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP3_LEN; j++)
                    {
                        board[shipStartPoint + j] = Ship3[j];
                    }
                    ship3Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        case 4:
            for (int i = 0; i < SHIP4_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + SHIP4_LEN > nextFullNumber)
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP4_LEN; j++)
                    {
                        board[shipStartPoint + j] = Ship4[j];
                    }
                    ship4Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        case 5:
            for (int i = 0; i < SHIP5_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + SHIP5_LEN > nextFullNumber)
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP5_LEN; j++)
                    {
                        board[shipStartPoint + j] = Ship5[j];
                    }
                    ship5Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        }
    }
    else // senkrecht
    {
        switch (userShipSize)
        {
        case 2:
            for (int i = 0; i < SHIP2_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i * 10] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + (SHIP2_LEN - 1) * 10 > 100)
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP2_LEN; j++)
                    {
                        board[shipStartPoint + j * 10] = Ship2[j];
                    }
                    ship2Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        case 3:
            for (int i = 0; i < SHIP3_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i * 10] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + (SHIP3_LEN - 1) * 10 > 100)
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP3_LEN; j++)
                    {
                        board[shipStartPoint + j * 10] = Ship3[j];
                    }
                    ship3Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        case 4:
            for (int i = 0; i < SHIP4_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i * 10] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + (SHIP4_LEN - 1) * 10 > 100)
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP4_LEN; j++)
                    {
                        board[shipStartPoint + j * 10] = Ship4[j];
                    }
                    ship4Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        case 5:
            for (int i = 0; i < SHIP5_LEN; i++) // Überprüfen ob schon ein Schiff vorhanden ist
            {
                if (board[shipStartPoint + i * 10] != ' ')
                {
                    temp = 1;
                }
            }
            if (temp == 0) // Wenn kein Schiff vorhanden ist
            {
                if (shipStartPoint + (SHIP5_LEN - 1) * 10 > 100)
                {
                    printf("Ship is too long!\n");
                }
                else
                {
                    for (int j = 0; j < SHIP5_LEN; j++)
                    {
                        board[shipStartPoint + j * 10] = Ship5[j];
                    }
                    ship5Amount--;
                }
            }
            else
            {
                printf("There is already a ship there!\n");
                temp = 0;
            }
            break;
        }
    }
}


int main()
{
    // Spielfeld
    char board1[100] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};


    printBoard(board1);

    // Anzahl der Schiffe für einen Spieler
    int ship2Amount = 2;
    int ship3Amount = 3;
    int ship4Amount = 2;
    int ship5Amount = 1;


    // Game Loop
    while (1)
    {
        int start = userShipStart();
        shipPlacement(start, board1, &ship2Amount, ship3Amount, ship4Amount, ship5Amount);

        printBoard(board1);
    }

    return 0;
}