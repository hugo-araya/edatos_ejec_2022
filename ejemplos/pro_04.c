#include <stdio.h>

int main(){
    int num;
    int cont = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    while (num != 1){
        if ((num % 2) == 0){
            num = num /2;
        }
        else{
            num = num * 3 + 1;
        }
        printf("%d\n", num);
        cont++;
    }
    printf("Iteraciones: %d\n", cont);
    return 0;
}
