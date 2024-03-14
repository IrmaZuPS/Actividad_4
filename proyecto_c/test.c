#include <stdio.h>

#define TC_DOLAR_GTQ 7.75 //tipo de cambio: 1 USD = 7.75 GTQ
int main(){
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("ingrese su opcion");
    scanf("%d" , &opcion);

    switch (opcion){
        case 1: 
            printf("Ingrese la cantidad en Dolares: ");
            scanf ("%d", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
            break;
        case 2:
            printf("ingrese la cantidad en Quetzales:");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
            break;
        default:
        printf("opciín no valida\n");
}
return 0;
}