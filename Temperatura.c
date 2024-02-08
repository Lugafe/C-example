#include <stdio.h>
/* Programa feito para transformar as temperatuas e iniciar com uma 
tabela dos valores equivalentes à 0 e 100 graus 
*/

int converteCelsius(int temperatura);
int converteFahrenheit(int temperatura);
void imprimirTabela(); 

int main()
{
    int x;
    int temperatura;
    imprimirTabela();
    printf("Digite 1 para converter uma temperatura de Celsius para Fahrenheit ou 2 para converter de Fahrenheit para Celsius\n");
    scanf("%d", &x);    
    switch (x)
    {
    case 1:
        printf("Digite a temperatura para ser convertida:\n");
        scanf("%d\n", &temperatura);
        temperatura = converteCelsius(temperatura);
        printf("%d\n",temperatura);
        break;
    case 2:
        printf("Digite a temperatura para ser convertida:\n");
        scanf("%d\n", &temperatura);
        temperatura = converteFahrenheit(temperatura);
        printf("%d\n",temperatura);
        break;
    default:
        printf("Digite um numero valido");
        break;
    }   

    return 0;
}
void imprimirTabela(){
    printf("Conversao de 0 a 100");
    for (int i = 0; i <= 100 ; i = i+3)
    {
        printf("    %d ---- %d   ",i,converteCelsius(i));
        printf("   %d ---- %d   ",i+1,converteCelsius(i+1));
        printf("  %d ---- %d\n",i+2,converteCelsius(i+2));
    }
    
}

int converteCelsius(int temperatura){
    return ((temperatura * 1.8) + 32);
}
int converteFahrenheit(int temperatura){
    return ((temperatura / 1.8) - 32);
}