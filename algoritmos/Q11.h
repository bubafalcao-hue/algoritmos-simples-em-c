#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL,"");
    float valorCompra, valorPago, troco;
    int centavos;

    int n100, n50, n20, n10, n5, n2;
    int m1, m050, m025, m010, m005, m001;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &valorPago);

    if (valorPago < valorCompra) {
        printf("Valor pago insuficiente!\n");
        return 0;
    }

    troco = valorPago - valorCompra;
    centavos = (int)(troco * 100 + 0.5); 
    
    //Aqui é a parte das notas:.
    n100 = centavos / 10000; centavos %= 10000;
    n50  = centavos / 5000;  centavos %= 5000;
    n20  = centavos / 2000;  centavos %= 2000;
    n10  = centavos / 1000;  centavos %= 1000;
    n5   = centavos / 500;   centavos %= 500;
    n2   = centavos / 200;   centavos %= 200;

	//Aqui é a parte das moedas:.
    m1    = centavos / 100; centavos %= 100;
    m050  = centavos / 50;  centavos %= 50;
    m025  = centavos / 25;  centavos %= 25;
    m010  = centavos / 10;  centavos %= 10;
    m005  = centavos / 5;   centavos %= 5;
    m001  = centavos;     
    
    printf("\nTroco: R$ %.2f\n", troco);
    printf("--- Cédulas ---\n");
    if (n100 > 0) printf("Notas de 100: %d\n", n100);
    if (n50  > 0) printf("Notas de 50 : %d\n", n50);
    if (n20  > 0) printf("Notas de 20 : %d\n", n20);
    if (n10  > 0) printf("Notas de 10 : %d\n", n10);
    if (n5   > 0) printf("Notas de 5  : %d\n", n5);
    if (n2   > 0) printf("Notas de 2  : %d\n", n2);

    printf("--- Moedas ---\n");
    if (m1   > 0) printf("Moedas de 1 real   : %d\n", m1);
    if (m050 > 0) printf("Moedas de 0.50 real: %d\n", m050);
    if (m025 > 0) printf("Moedas de 0.25 real: %d\n", m025);
    if (m010 > 0) printf("Moedas de 0.10 real: %d\n", m010);
    if (m005 > 0) printf("Moedas de 0.05 real: %d\n", m005);
    if (m001 > 0) printf("Moedas de 0.01 real: %d\n", m001);

    return 0;
}
