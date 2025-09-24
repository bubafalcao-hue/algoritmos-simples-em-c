#include <stdio.h>

int main()
{
float raio,area,h,v ;
const float p = 3.14;

printf("Digite um valor do raio: ");
scanf("%f",&raio);
printf("Digite um valor da altura: ");
scanf("%f",&h); 
	    
area=2*p*raio*h+raio;
v=p*raio*2*h;
printf("a area do cone é %f e o volume é igual a %f  .",area,v);
return 0;
    
} 