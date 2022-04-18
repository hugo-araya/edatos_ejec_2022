#include <stdio.h>

int main(){
    FILE *ar;
    int numero;
    ar = fopen("texto.txt", "r");
    while (!feof(ar)){
        fscanf(ar,"%d",&numero);
        printf("Leido es : %d\n", numero);
    }
    return 0;
}
