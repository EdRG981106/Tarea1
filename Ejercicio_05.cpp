#include<stdio.h>
#include<stdlib.h>

int main(){
    int edad;
    float precio,descuento;
    printf("Bienvenidos a cinelandia!\nEl precio de las entradas es:\n\nEntrada normal: 75 pesos\n\nNinios: descuento del 60 por ciento\n\nAdultos mayores de 60 anios: descuento del 55 por ciento");
    printf("\nIngresa tu edad: ");
    scanf("%d",&edad);
    if(edad<=10){
        descuento=75.0*0.60;
        precio=75-descuento;
        printf("\nTu descuento es de %.2f pesos",descuento);
        printf("\nEl precio de tu entrada es de %.2f pesos",precio);
    }
    else if(edad>=60){
        descuento=75.0*0.55;
        precio=75-descuento;
        printf("\nTu descuento es de %.2f pesos",descuento);
        printf("\nEl precio de tu entrada es de %.2f pesos",precio);
    }
    else{
        precio=75;
        printf("El precio de tu entrada es de %.2f",precio);
    }

}
