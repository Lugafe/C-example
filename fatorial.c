#include <stdio.h>

int fatorial(int n);

int main()
{
    int i;

    for ( i = 0; i <= 10; i++)
    {
        printf("%d! = %d\n", i , fatorial(i));        
    }   
    
    return 0;
}

int fatorial(int n){
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return(n*fatorial(n-1));
    }    
}
