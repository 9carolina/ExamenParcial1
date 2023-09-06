///7. Programa que haga un arbolito de navidad, pero con el mismo número de pisos hacia arriba y hacia abajo

#include <stdio.h>
#include <math.h>

int main()
{
	int a=1;
	while (a==1)
	{
		int a;
		printf("Elija un numero, ya sea 3, 5, 7, para determinar los niveles de su arbolito: ");
		scanf ("%d", &a);
		
		switch(a)
		{
			case 3:
				printf("\n  *\n ***\n*****\n  |\n");
				printf("  |\n*****\n ***\n  *\n\n");
				break;
				
			case 5:
				printf("\n    *\n   ***\n  *****\n *******\n*********\n    |\n");
				printf("    |\n*********\n *******\n  *****\n   ***\n    *\n\n");
				break;
				
			case 7:
				printf("\n      *\n     ***\n    *****\n   *******\n  *********\n ***********\n*************\n      |\n");
				printf("      |\n*************\n ***********\n  *********\n   *******\n    *****\n     ***\n      *\n\n");
				break;
			
			default:
				printf("Opcion no valida\n");
				break;
		}
		
	}
	
	
	return 0;
}
