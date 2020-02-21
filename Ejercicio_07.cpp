#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("3,9,5");
    printf("\nINGRESA LA CONTRASENIA");
    printf("\nIngresa un primer numero: ");
    scanf("%d",&a);
    printf("Ingresa un segundo numero: ");
    scanf("%d",&b);
    printf("Ingresa un tercer numero: ");
    scanf("%d",&c);
    if((a==3)&&(b==9)&&(c==5)){
        printf("ACCESO ACEPTADO");
    }
    else{
        printf("ACCESO DENEGADO");
    }
}
