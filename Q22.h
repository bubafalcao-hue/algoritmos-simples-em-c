#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
    int num1, num2, operacao;
    float resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\nEscolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    printf("Digite o numero da operacao: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            if (num2 != 0) {
                resultado = (float)num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao permitida!\n");
            }
            break;
        case 4:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}
