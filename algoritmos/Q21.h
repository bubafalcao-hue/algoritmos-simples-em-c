#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    int a, b, c;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &a);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &b);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Os lados formam um triangulo.\n");

        if (a == b && b == c) {
            printf("Tipo: Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Tipo: Isosceles\n");
        } else {
            printf("Tipo: Escaleno\n");
        }

    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
