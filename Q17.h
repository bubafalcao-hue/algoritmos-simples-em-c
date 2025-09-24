#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC>ALL,"");
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Os numeros %d e %d sao IGUAIS.\n", num1, num2);
    } else {
        printf("Os numeros %d e %d sao DIFERENTES.\n", num1, num2);
        if (num1 > num2) {
            printf("O maior numero eh: %d\n", num1);
        } else {
            printf("O maior numero eh: %d\n", num2);
        }
    }

    return 0;
}