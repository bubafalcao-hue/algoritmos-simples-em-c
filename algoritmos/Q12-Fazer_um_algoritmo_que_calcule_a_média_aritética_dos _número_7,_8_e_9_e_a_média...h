#include <stdio.h>
#include <locale.h>

int main()
{float n1=7, n2=8,n3=9,n4=6,n5=5,n6=4,m2,mf,m,s;
setlocale(LC_ALL,"");
m=(n1+n2+n3)/3;
m2=(n4+n5+n6)/3;
s=m+m2;
mf=s/2;
printf("A soma das médias dos dois estudantes é igual a %.2f, e a média da união de suas notas é igual a %.2f.", s, mf );
  return 0;
}