#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    int quantidade;
    float precoUnitario, total;

    printf("Digite o numero de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        precoUnitario = 0.30;
    } else {
        precoUnitario = 0.25;
    }

    total = quantidade * precoUnitario;

    printf("Preco unitário: R$ %.2f\n", precoUnitario);
    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}