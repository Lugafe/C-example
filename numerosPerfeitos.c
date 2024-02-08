#include <stdio.h>

int main()
{
    printf("Numeros perfeitos entre 0 e 100\n");
    for (size_t i = 0; i < 100; i++)
    {
        int x = 1;
        printf("ok1\n");
        for (size_t j = 2; j < i-1; j++)
        {
            if (i%j==0)
            {
                x = x + j;
            }            
        }
        if (x == i)
        {
            printf("O %d e' perfeito\n", x);
        }
        
        
        
    }
    printf("Fim\n");
    return 0;
}


