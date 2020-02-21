#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;

    printf("Ingrese un numero entero: ");
    scanf("%d",&a);
    printf("Ingrese un numero entero: ");
    scanf("%d",&b);
    if(a%b==0){
        printf("Los numeros son divisibles entre si!");
    }
    else{
        printf("Los numeros no son divisibles entre si!");
    }
}
