#include <stdio.h>

//funcao para ver quais movimentos podem ser feitos
int posicoes(int cavalo, int tabuleiro[8][8]);
void printTable(int valores[8][8]);

int main()
{
    int cavalo = (int)('k');    
    int p = 0;
    int tabuleiro[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };
    tabuleiro[3][4] = cavalo;
    posicoes(cavalo,tabuleiro);
    printf("Digite o numero da posicao que deseja");
    scanf("%d", p);    
    do
    {

        if (p != -1)
        {   
           move(p); 
           printf("Digite o numero da posicao que deseja");
           scanf("%d", p); 
        }
        
    } while (p != -1);
       
        

    return 0;
}

int posicoes(int cavalo, int valores[8][8])
{
    printf("{\n");
    for (size_t i = 0; i < 8; i++)
    {   
        printf("\t");
        for (size_t j = 0; j < 8; j++)
        {
            if (valores[i+1][j-2] == cavalo)
            {
                printf("%d ", 1);//p0
            }
            else if (valores[i+2][j-1] == cavalo)
            {
                printf("%d ", 2);//p1
            }
            else if (valores[i+2][j+1] == cavalo)
            {
                printf("%d ", 3);//p2
            }
            else if (valores[i+1][j+2] == cavalo)
            {
                printf("%d ", 4);//p3
            }
            else if (valores[i-1][j+2] == cavalo)
            {
                printf("%d ", 5);//p4
            }
            else if (valores[i-2][j+1] == cavalo)
            {
                printf("%d ", 6);//p5
            }
            else if (valores[i-2][j-1] == cavalo)
            {
                printf("%d ", 7);//p6
            }
            else if (valores[i-1][j-2] == cavalo)
            {
                printf("%d ", 8);//p7
            }
            else if (valores[i][j] == cavalo)
            {
                printf("%c ", (char)(cavalo));//p7
            }
            else
            {
                printf("%d ", valores[i][j]);
            }          
        }
        printf("\n");
    }
    printf("}");
}

void printTable(int valores[8][8])
{
    printf("{\n");
    for (size_t i = 0; i < 8; i++)
    {   
        printf("\t");
        for (size_t j = 0; j < 8; j++)
        {
            int x = valores[i][j];
            printf("%d ", x);
        }
        printf("\n");
    }
    printf("}");
}