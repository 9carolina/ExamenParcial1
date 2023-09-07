//1. Programa que imprime 10 números
#include <stdio.h>

int main()
{
	int numero;
	
	printf("Ingresa un numero para comenzar la sucesion de sus proximos 10 numeros: ");
	scanf("%d", &numero);
	
	printf("Sucesion de los proximos 10 numeros: ");
	
	int sucesion=0;
	
	while (sucesion<11)
		{
        printf("%d ",numero+sucesion);
        sucesion++;
		}

	return 0;
}
