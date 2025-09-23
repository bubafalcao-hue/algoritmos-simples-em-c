#include <stdio.h>

int main()
{
	float centimetros, polegadas;
	
	printf("Digite um valor em centimetros: ");
	
	scanf("%f", &centimetros);
	
	polegadas = (centimetros * 2.54);
	
	printf("\n %f centimetros é igual a %f polegadas.\n", centimetros, polegadas);
	
	return 0;

}
