#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;

    printf("Ingrese un numero entero del teclado: ");
    scanf("%d",&a);
    printf("Ingrese un numero entero del teclado: ");
    scanf("%d",&b);
    if(a>b){
        printf("%d es mayor que %d",a,b);
    }
    else if(a<b){
        printf("%d es mayor que %d",b,a);
    }
    else{
        printf("Es el mismo numero!");
    }
}
