#include <stdio.h>

int main(){
    float real, absoluto;
    printf("Ingrese un numero: ");
    scanf("%f", &real);
    if (real < 0){
        absoluto = (-1)*real;
    }
    else{
        absoluto = real;
    }
    printf("El valor absoluto de %f es %f\n", real, absoluto);
    return 0;
}
