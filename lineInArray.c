#include <stdio.h>

#define SIZE 4

void toZero(int m[SIZE][SIZE]);
void sum(int line,int m[SIZE][SIZE]);
void media(int line,int m[SIZE][SIZE]);



int main() {
 
    int m[SIZE][SIZE];
    int line;
    char c;
    toZero(m);
    //printf("linha:");
    scanf("%d", &line);
    //printf("caracter");
    scanf("%c", &c);    
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            int temp = 0;
            //printf("l =%d c =%d\n");
            scanf("%d", &temp);
            m[i][j] = temp;
        }       
        
    }
        
    switch (c)
    {
    case 'M':
        media(line,m);
        break;
    case 'S':
        sum(line,m);
        break;
    
    default:
        break;
    }

    return 0;
}

void toZero(int m[SIZE][SIZE]){
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            m[i][j] = 0;
        }
        
    }
    
}

void sum(int line,int m[SIZE][SIZE]){
    int soma = 0;   
        
    for (size_t j = 0; j < 4; j++)
    {            
        soma += m[line][j];
    }      
        
    printf("%d", soma);
    
}
void media(int line,int m[SIZE][SIZE]){
    int soma = 0;   
        
    for (size_t j = 0; j < 4; j++)
    {            
        soma += m[line][j];
    }      
        
    printf("%f", soma/line);
}


