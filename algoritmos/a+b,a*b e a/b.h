#include <stdio.h>

int main()
{
float a, b, soma, produto, quociente;

printf("Digite um valor: ");
    scanf("%f",&a);  
printf("Digite um valor: ");
    scanf("%f",&b);
soma = a + b;
produto = a * b ;
quociente = a / b;

printf("\nSoma:%f",soma);
printf("\nProduto:%f",produto);
printf("\nQuociente:%f",quociente);

return 0;
}