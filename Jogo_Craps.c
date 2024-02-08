#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();

enum Status { CONTINUE, WON, LOST} game_status;


int main(){
    int sum;
    int myPoint;
    
    srand(time(NULL));

    switch (sum)
    {
    case 7:
    case 11:
        game_status = WON;        
        break;
    
    case 2:
    case 3:
    case 12:
        game_status = LOST;        
        break;    
    default:
        game_status = CONTINUE;
        myPoint = sum;
        printf("O ponto e' %d\n");
        break;
    }

    while (game_status == CONTINUE)
    {
        sum = rollDice();

        if (sum == myPoint)
        {
            game_status = WON;
        }
        else
        {
            if (sum == 7)
            {                
                game_status = LOST;                
            }            
        }       
    }

    if ( game_status == WON)
    {
        printf("Jogador venceu\n");
    }
    else
    {
        printf("Jogador perdeu\n");
    }
    
    return 0;

}

int rollDice(){
    int dado1;    
    int dado2;    
    int workSum;

    dado1 = 1 + (rand() % 6);    
    dado2 = 1 + (rand() % 6);    
    workSum = dado1 + dado2;

    printf("Jogador rolou %d + %d = %d\n", dado1, dado2, workSum);
    return workSum;
}