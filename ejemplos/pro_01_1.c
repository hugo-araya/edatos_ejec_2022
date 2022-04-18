#include <stdio.h>
#include <math.h>

int main(){
    float real, absoluto;
    printf("Ingrese un numero: ");
    scanf("%f", &real);
    absoluto = fabs(real);
    printf("El valor absoluto de %f es %f\n", real, absoluto);
    return 0;
}
