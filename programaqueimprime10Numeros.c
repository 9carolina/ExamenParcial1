//1. Programa que imprime 10 números
#include <stdio.h>

int main()
{
	int numero, sucesion;
	
	printf("Ingresa un numero para comenzar la sucesion de sus proximos 10 numeros: ");
	scanf("%d", &numero);
	
	printf("Sucesion de los proximos 10 numeros: ");
	
	
	for (sucesion = 0; sucesion < 11; sucesion++) 
		{
        printf("%d ", numero + sucesion);
		}

	return 0;
}
