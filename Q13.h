#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    float precoFabrica, precoImpostos, precoRevendedor, precoFinal;

    printf("Digite o preco de fabrica do carro: R$ ");
    scanf("%f", &precoFabrica);

    precoImpostos = precoFabrica * 0.45; 
    precoRevendedor = precoFabrica * 0.28;
    
    precoFinal = precoFabrica + precoImpostos + precoRevendedor;

    printf("\n--- Resultado ---\n");
    printf("Preco de fabrica     : R$ %.2f\n", precoFabrica);
    printf("Impostos (45%%)       : R$ %.2f\n", precoImpostos);
    printf("Revendedor (28%%)     : R$ %.2f\n", precoRevendedor);
    printf("Preco final do carro : R$ %.2f\n", precoFinal);

    return 0;
}