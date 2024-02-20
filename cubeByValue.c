#include <stdio.h>

int cubeByValue( int n);

int main(){
    int n = 0;
    printf("Qual o valor de n?\n");
    scanf("%d", &n);
    n = cubeByValue(n);
    printf("%d e' o valor ao cubo de n\n", n);
}

int cubeByValue( int n){
    return n * n * n;
}