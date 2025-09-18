#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Digite um valor do dividendo: ");
    scanf("%i",&a);
    printf("Digite um valor do devisor: ");
    scanf("%i",&b);
    c=a/b;
    d=a%b;
    printf("\nQuociente:%i",c);
    printf("\nresto:%i",d);
    return 0;
}
