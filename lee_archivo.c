#include <stdio.h>

int main(){
    FILE *ar, *sal;
    int numero;
    ar = fopen("datos.txt","r");
    sal = fopen("salida.txt", "w");
    while (!feof(ar)){
        fscanf(ar, "%d", &numero);
        fprintf(sal, "Lo leido es: %d\n", numero*2);
    }
    fclose(ar);
    fclose(sal);
    return 0;
}