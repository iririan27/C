#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int opcion;
	float a, b, c,d; 
	
	printf ("\tAlumna: Falcón Mercado Cristina Iririan\n");
	printf ("\tIngrese los valores a utilizar:\n");
	printf ("Valor 1:\n");
	scanf("%f",&a);
	
	printf ("Valor 2:\n");
	scanf("%f",&b);
	
	printf("\tElige una opciÃ³n a realizar:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- División:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raíz cuadrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a +b ;
	printf("\tEl resultado de la suma es: %f\n",c);
		break;
	case 2: 
		c = a - b; 
	printf("\tEl resultado de la resta es:%f\n",c);
		break;
	case 3:
		c=a*b;
	printf("\tEl resultado de la multiplicación es:%f\n",c);
		break;
	case 4:
		c=a/b;
	printf("\tEl resultdo de la división es:%f\n",c);
		break;
	case 5:
		c = pow(b, a);
	printf("\tEl resultdo de la potencia es:%f\n",c);
		break;
	case 6:
		c=sqrt(b);
		d=sqrt(a);
	printf("\nEl resultado del valor 1 es: %f\n", d);
	printf("\nEl resultado del valor 2 es: %f\n", c);
		break;
	default:
		exit(0);
	}
	printf("\tTermino del ejercicio con switch\n");

} 
