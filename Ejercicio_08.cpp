#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;

    printf("Numeros de menor a moyor");
    printf("\nIngrese el valor del primer numero: ");
    scanf("%d",&a);
    printf("\nIngrese el valor del segundp numero: ");
    scanf("%d",&b);
    printf("\nIngrese el valor del tercer numero: ");
    scanf("%d",&c);
    if((a<b && a<c) && (b<c)){
        printf("\n%d",a);
        printf("\n%d",b);
        printf("\n%d",c);
    }
    else if((a<b && a<c) && c<b){
        printf("\n%d",a);
        printf("\n%d",c);
        printf("\n%d",b);
    }
    else if((b<a && b<c) && (a<c)){
        printf("\n%d",b);
        printf("\n%d",a);
        printf("\n%d",c);
    }
    else if((b<a && b<c) && (c<a)){
        printf("\n%d",b);
        printf("\n%d",c);
        printf("\n%d",a);
    }
    else if((c<a && c<b) && (b<a)){
        printf("\n%d",c);
        printf("\n%d",b);
        printf("\n%d",a);
    }
    else if((c<a && c<b) && (a<b)){
        printf("\n%d",c);
        printf("\n%d",a);
        printf("\n%d",b);
    }
}
