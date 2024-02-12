#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();
void printTable(int valores[6][6]);

int main()
{
    int sum;
    int myPoint;
    int valores[6][6] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0}};
    
    
    for (size_t i = 0; i < 3; i++)
    {
        myPoint = rollDice();
        if (myPoint == 2)
        {       
            valores[0][0] += 1;
           
        }
        else if (myPoint == 3)
        {
            valores[1][0] += 1;
            valores[0][1] += 1;
        }
        else if (myPoint == 4)
        {
            valores[1][1] += 1;
            valores[0][2] += 1;
            valores[2][0] += 1;
        }
        else if (myPoint ==5)
        {
            valores[0][3] += 1;
            valores[1][2] += 1;
            valores[3][0] += 1;
            valores[2][1] += 1;
        }
        else if (myPoint == 6)
        {
            valores[1][3] += 1;
            valores[2][2] += 1;
            valores[3][1] += 1;
            valores[4][0] += 1;
            valores[0][4] += 1;
        }
        else if (myPoint == 7)
        {
            valores[3][2] += 1;
            valores[5][0] += 1;
            valores[0][5] += 1;
            valores[4][1] += 1;
            valores[1][4] += 1;
            valores[2][3] += 1;
        }
        else if (myPoint == 8)
        {
            valores[3][3] += 1;
            valores[5][1] += 1;
            valores[1][5] += 1;
            valores[4][2] += 1;
            valores[2][4] += 1;
        }
        else if (myPoint == 9)
        {
            valores[5][2] += 1;
            valores[2][5] += 1;
            valores[4][3] += 1;
            valores[3][4] += 1;
        }
        else if (myPoint == 10)
        {
            valores[4][4] =+ 1;
            valores[3][5] =+ 1;
            valores[5][3] =+ 1;
        }
        else if (myPoint == 11)
        {
            valores[4][5] += 1;
            valores[5][4] += 1;
        }
        else if (myPoint == 12)
        {
            valores[5][5] += 1;
        }           
                  
    }
    printTable(valores);
    return 0;
}

int rollDice()
{
    int dado1;
    int dado2;
    int workSum;

    dado1 = 1 + (rand() % 6);
    dado2 = 1 + (rand() % 6);
    workSum = dado1 + dado2;

    //printf("Jogador rolou %d + %d = %d\n", dado1, dado2, workSum);
    return workSum;
}

void printTable(int valores[6][6])
{
    printf("{\n");
    for (size_t i = 0; i < 6; i++)
    {   
        printf("\t");
        for (size_t j = 0; j < 6; j++)
        {
            int x = valores[i][j];
            printf("%d ", x);
        }
        printf("\n");
    }
    printf("}");
}