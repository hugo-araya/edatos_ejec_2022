#include<stdio.h>

void funcion(int num); /* prototipo */

int main(){ /* Escribe dos números */
	int num=10; /* variable local */
	printf("%d\n",num);
	funcion(num); /* llamada */
	printf("%d\n",num);
	return 0;
}

void funcion(int num){
	num = 20;
	printf("%d\n",num);
}