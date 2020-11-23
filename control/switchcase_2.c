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

float division (float a , float b)
{
	return  a/b;
	
}

float potencia (float a , float b)
{
	return  pow(b, a);
	
}

float raiz (int a , int b)
{
	return  sqrt(b);
	return  sqrt(a);
	
}

long factorial(int n)
{
	if (n == 0) 
		return 1; 
	else
		return n* factorial (n - 1); 
}

int main(void )
{
	int opcion;
	float a, b, c,d,n; 
	
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
	//	suma(a,b);
	//int suma = sumar (a,b);
	//printf("\tEl resultado de la suma es: %f\n",suma);
	printf("%f",sumar(a,b));
		break;
	case 2: 
	//printf("\tEl resultado de la resta es:%f\n",resta);
	printf("%f",resta(a,b));
		break;
	case 3:
	//printf("\tEl resultado de la multiplicación es:%f\n",multiplicacion);
	printf("%f",multiplicacion(a,b));
		break;
	case 4:
	//	c=a/b;
	//printf("\tEl resultdo de la división es:%f\n",c);
	printf("%f", division (a,b));
		break;
	case 5:
	//	c = pow(b, a);
	//printf("\tEl resultdo de la potencia es:%f\n",c);
	printf("%f", potencia (a,b));
		break;
	case 6:
	//	c=sqrt(b);
	//	d=sqrt(a);
	//printf("\nEl resultado del valor 1 es: %f\n", d);
	//printf("\nEl resultado del valor 2 es: %f\n", c);
	printf("%f", raiz (b,a));
	printf("\n%f", raiz (a,b));
		break;
	case 7: 
	printf("%ld\n ", factorial(a));
	printf("%ld\n", factorial (b));
		return 0;
	break; 
	
	default:
		exit(0);
	} 
	printf("\n\tTermino del ejercicio con switch\n");

	} while (opcion!=8);
} 
