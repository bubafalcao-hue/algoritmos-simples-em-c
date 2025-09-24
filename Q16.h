#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O valor resultante eh: %d\n", valor);
    } else {
        printf("O valor resultante eh: %d\n", -valor);
    }

    return 0;
}
