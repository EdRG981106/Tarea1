#include<stdio.h>
#include<stdlib.h>

int main()
{
    char opc;
    printf("Ingresa una tecla dell teclado: ");
    opc=getchar();
    if(opc=='0' || opc=='1' || opc=='2' || opc=='3' || opc=='4' || opc=='5' || opc=='6' || opc=='7' || opc=='8' || opc=='9'){
        printf("Es un numero");
    }
    else{
        printf("Es un caracter");
    }
}
