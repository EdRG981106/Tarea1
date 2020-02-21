#include<stdio.h>
#include<stdlib.h>

int main()
{
    int opc;
    float b,h,a,lA,lB;
    printf("1.-Calcular el area de un triangulo\n2.-Calcular el area de un trapecio\n3.-Calcular el area de un rectangulo");
    printf("\nElija una opcion (numero): ");
    scanf("%d",&opc);
    switch(opc)
    {
    case 1:
        printf("TRIANGULO");
        printf("\nIngrese el valor de la base del triangulo: ");
        scanf("%f",&b);
        printf("\nIngrese el valor de la altura del triangulo: ");
        scanf("%f",&h);
        a=(b*h)/2;
        printf("El area es: %.2f m^2",a);
        break;
    case 2:
        printf("\nTRAPECIO");
        printf("\nIngrese el valor del lado a: ");
        scanf("%f",&lA);
        printf("\nIngrese el valor del lado b: ");
        scanf("%f",&lB);
        printf("\Ingrese el valor de la altura: ");
        scanf("%f",&h);
        a=((lA+lB)*h)/2;
        printf("\nEl area es: %.2f m^2",a);
        break;
    case 3:
        printf("\nRectangulo");
        printf("\nIngrese el valor del lado a: ");
        scanf("%f",&lA);
        printf("\nIngrese el valor del lado b: ");
        scanf("%f",&lB);
        a=lA*lB;
        printf("\nEl area es: %.2f m^2",a);
        break;
    default:
        printf("Opcion invalida");
    }
}
