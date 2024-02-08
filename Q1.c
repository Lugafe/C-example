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
        printf("O ponto é %d\n");
        break;
    }

    while (game_status == CONTINUE)
    {
        /* code */
    }
    

   
}

int rollDice(){

    
}