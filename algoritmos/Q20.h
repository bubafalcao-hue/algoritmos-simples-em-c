#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    int a, b, c, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Números em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
