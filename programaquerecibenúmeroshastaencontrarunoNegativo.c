//6. Programa que recibe números hasta encontrar uno negativo.

#include <stdio.h>
#include <math.h>

int main()
{
	int a=1;
	while (a>=0)
	{
		int a;
			printf("\nIngrese un numero: \n");
			scanf ("%d", &a);
		
			if (a>=1)
			{
			printf("%d", a);
			}
					
			if (a<0)
			{
			printf("Opcion no valida");
			break;
			}
	
	}
			return 0;	
}
