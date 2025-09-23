#include <stdio.h>

int main()
{   int numero;
    printf("digite um número inteiro");
    scanf("%i",&numero);
    
    if(numero==0){
        printf("O número 0");
    }
    else
        if(numero<0){
            printf("O número é negativo");
        }
    else{
        printf("O número é positivo");
    }
    return 0;
}
