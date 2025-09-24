#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor %d eh PAR.\n", valor);
    } else {
        printf("O valor %d eh IMPAR.\n", valor);
    }

    return 0;
}
