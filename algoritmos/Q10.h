#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    int valor;
    int ced100, ced50, ced20, ced10, ced5, ced2, ced1;

    printf("Digite o valor a ser sacado: R$ ");
    scanf("%d", &valor);

    ced100 = valor / 100;
    valor = valor % 100;

    ced50 = valor / 50;
    valor = valor % 50;

    ced20 = valor / 20;
    valor = valor % 20;

    ced10 = valor / 10;
    valor = valor % 10;

    ced5 = valor / 5;
    valor = valor % 5;

    ced2 = valor / 2;
    valor = valor % 2;

    ced1 = valor;

    printf("\n--- Quantidade de cedulas ---\n");
    if (ced100 > 0) printf("Notas de 100: %d\n", ced100);
    if (ced50 > 0)  printf("Notas de 50 : %d\n", ced50);
    if (ced20 > 0)  printf("Notas de 20 : %d\n", ced20);
    if (ced10 > 0)  printf("Notas de 10 : %d\n", ced10);
    if (ced5 > 0)   printf("Notas de 5  : %d\n", ced5);
    if (ced2 > 0)   printf("Notas de 2  : %d\n", ced2);
    if (ced1 > 0)   printf("Notas de 1  : %d\n", ced1);

    return 0;
}
