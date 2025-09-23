// Online C compiler to run C program online
#include <stdio.h>

int main()
{float n1=7, n2=8,n3=9,n4=6,n5=5,n6=4,m2,mf,m;
m=(n1+n2+n3)/3;
m2=(n4+n5+n6)/3;
mf=(m+m2)/2;
if (mf>=7){
    printf("\naprovado");
} else
    if((mf/2>=4)&&(mf/2<7)){
        printf("\nna final.");
    }
    else
    {printf("\nreprovado");
    }
  return 0;
}