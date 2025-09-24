#include <stdio.h>
#include <locale.h>
//const float 0.15;
//#define comissao 0.15;

int main()
{
float f,x,b;
setlocale(LC_ALL,"");

printf("digte um vaolr de Salario  Fixo ");
scanf("%f",&b);
printf("Digite um valor de Total de Vendas ");
scanf("%f",&x); 
f=0.15*x+b;	    
printf("o vaolr de Salario Fixo  é %f e valor de Sala´rio Final %f  .",b,f);
return 0;
    
} 