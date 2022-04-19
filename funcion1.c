#include<stdio.h>

void muestra(int);

int main(){
    int num;
    num = 10;
    printf("%d\n", num);
    muestra(num);
    printf("%d\n", num);
    return 0;
}

void muestra(int num){
    num = num + 10;
    printf("%d\n", num);
}