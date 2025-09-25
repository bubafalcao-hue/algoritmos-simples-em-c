#include <stdio.h>

int main()
{
    int a,b,c;

  printf("digte um valor de a: ");
scanf("%d",&a);

printf("Digite um valor de b: ");
scanf("%d",&b);

printf("\n");
printf("valor do a digitado = %i\n",a);
printf("valor do b digitado = %i \n",b);
 c=a;
 a=b;
 b=c;
printf("\n");    
printf("Valor do a trocado= %i \n",a);
printf("Valor do b trocado= %i\n", b);


return 0;

    
}