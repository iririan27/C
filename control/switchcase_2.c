#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sumar (int a , int b)
{
	return  a +b ;
	
}
float resta (int a , int b)
{
	return  a - b; 
}

float  multiplicacion (int a,int b)
{
   return a*b;
}


long factorial(int n)
{
	if (n == 0) /* caso base */
		return 1; /* como 0! = 1, regresa 1*/
	else
		return n * factorial (n - 1); /* llamada a esta misma funciÃ³n */
}

int main(void )
{
	int opcion;
	float a, b, c,d; 
	
	printf ("\tAlumna: Falcón Mercado Cristina Iririan\n");
	printf ("\tIngrese los valores a utilizar:\n");
	printf ("Valor 1:\n");
	scanf("%f",&a);
	
	printf ("Valor 2:\n");
	scanf("%f",&b);
	do 
	{
	printf("\tElige una opciÃ³n a realizar:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- División:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raíz cuadrada:\n");
	printf("\t 7.- Factorial:  \n");
	printf("\t 8.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
	int suma = sumar (a,b);
	printf("\tEl resultado de la suma es: %f\n",suma);
		break;
	case 2: 
	printf("\tEl resultado de la resta es:%f\n",resta);
		break;
	case 3:
	printf("\tEl resultado de la multiplicación es:%f\n",multiplicacion);
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
	case 7: 
	printf("%ld\n ", factorial(-10));
	return 0;
	break; 
	
	default:
		exit(0);
	} 
	printf("\tTermino del ejercicio con switch\n");
	} while (opcion!=8);
} 
