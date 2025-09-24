#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
    char classe;
    float consumo, tarifa, VF, ICMS, VP;

    printf("Digite a classe consumidora (A, B ou C): ");
    scanf(" %c", &classe);

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);

    switch(classe) {
        case 'A':
        case 'a':
            tarifa = 0.5;
            break;
        case 'B':
        case 'b':
            tarifa = 0.8;
            break;
        case 'C':
        case 'c':
            tarifa = 1.0;
            break;
        default:
            printf("Classe consumidora invalida!\n");
            return 0;
    }

    VF = consumo * tarifa;
    ICMS = 0.3 * VF;
    VP = VF + ICMS;

    printf("\n--- Resultado ---\n");
    printf("Valor do fornecimento: R$ %.2f\n", VF);
    printf("ICMS (30%%): R$ %.2f\n", ICMS);
    printf("Valor a pagar: R$ %.2f\n", VP);

    return 0;
}