#include <stdio.h>
#include <stdlib.h>


void toZero(int v, int m[v][v]);
void printTable(int v, int valores[v][v]);
int main() 
{    
    int n;
    scanf("%d", &n);
    int v = ((n*2)-1);
    int m[v][v];
    toZero(v ,m);    
    printTable(v,m);
    int r = n;
  	for (int i = 0; i < v; i++) {        
        for (int j = i+1; j < i-1; j++) {
            m[i][j] = n;                        
        }        
        r--;
    }
    printTable(v,&m);
    
    return 0;
}
void toZero(int v, int m[v][v]){
    for (size_t i = 0; i < v; i++)
    {
        for (size_t j = 0; j < v; j++)
        {
            m[i][j] = 0;
        }
        
    }
    
}

void printTable(int v, int m[v][v])
{
    printf("{\n");
    for (size_t i = 0; i < v; i++)
    {   
        printf("\t");
        for (size_t j = 0; j < v; j++)
        {
            int x = m[i][j];
            printf("%d ", x);
        }
        printf("\n");
    }
    printf("}");
}

