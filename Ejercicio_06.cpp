#include<stdio.h>
#include<stdlib.h>

int main()
{
    int f,x;
    printf("Ingrese un valor para x: ");
    scanf("%d",&x);
    if(x<=0){
        f=x+3;
        printf("f(x)=x+3\nf(x)=%d",f);
    }
    if(x>0){
        f=(x*x) + (2*x);
        printf("f(x)=x^2 + 2x\nf(x)=%d",f);
    }
}
