#include <stdio.h>

void cubeByReference(int *nPtr);
int main(){
    int n = 0;
    printf("Qual o valor de n?\n");
    scanf("%d", &n);
    cubeByReference(&n);
    printf("%d e' o valor ao cubo de n\n", n);
}
void cubeByReference(int *nPtr){
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}


