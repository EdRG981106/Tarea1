#include<stdio.h>
#include<stdlib.h>

int main()
{
    float x1,x2,y1,y2,m;
    printf("PENDIENTE m=(y2-y1)/(x2-x1)");
    printf("\nIngrese el valor de x1: ");
    scanf("%f",&x1);
    printf("\nIngrese el valor de x2: ");
    scanf("%f",&x2);
    printf("\nIngrese el valor de y1: ");
    scanf("%f",&y1);
    printf("\nIngrese el valor de y2: ");
    scanf("%f",&y2);
    m=(y2-y1)/(x2-x1);
    if((x2-x1)!=0){
    printf("El valor de la pendiente es: %.2f",m);
    }
    if((x2-x1)==0){
        printf("La pendiente es vertical");
    }
}
