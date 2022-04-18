#include <stdio.h>

int main(){
    int num1, num2, num3, pagar;
    printf("Ingrese un numero 1: ");
    scanf("%d", &num1);
    printf("Ingrese un numero 2: ");
    scanf("%d", &num2);
    printf("Ingrese un numero 3: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)){
        pagar = num2 + num3;
    }
    else{
        if ((num2>num1) && (num2 > num3)){
            pagar = num1 + num3;
        }
        else{
            pagar = num1 + num2;
        }
    }
    printf("El valor a pagar es %d\n", pagar);
    return 0;
}
