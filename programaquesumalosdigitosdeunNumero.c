//5. Programa que suma los dígitos de un número

#include <stdio.h>

int main ()
{
	int numero, digito;
	int suma=0;
	
	printf("Ingrese un numero cuyos digitos desee sumar: ");
	scanf("%d", &numero);
	
	while (numero>0)
	{
		digito=numero%10;
		suma+=digito;
		numero/=10;
	}
	
		printf("La suma de los digitos del numero es: %d", suma);
	
	return 0;
}
