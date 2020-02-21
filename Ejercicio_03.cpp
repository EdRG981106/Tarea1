#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;

    printf("Ingrese un numero entero: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("\nEl numero es par!");
    }
    else if(a%3==0){
        printf("\nEl numero es impar y es divisible entre tres!");
    }
    else{
        printf("\nEl numero es impar y no es divisible entre tres");
    }
}
