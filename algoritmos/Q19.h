#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
    int num1, num2, num3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    maior = num1; 

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior número digitado eh: %d\n", maior);

    return 0;
}
