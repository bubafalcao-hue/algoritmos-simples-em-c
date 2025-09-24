#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    float a, b, c;
    float D, x1, x2;

    
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao eh uma equacao do 2º grau (a = 0).\n");
        return 0;
    }

    D = b*b - 4*a*c;

    if (D < 0) {
        printf("Nao ha solucao real, pois o discriminante D = %.2f < 0.\n", D);
    } else if (D == 0) {
        x1 = -b / (2*a);
        printf("Ha duas solucoes iguais: x1 = x2 = %.2f\n", x1);
    } else { // D > 0
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("Ha duas solucoes reais diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}

