#include <stdio.h>
#include <math.h>

 int a,b,c; 
 float resultado,d,h;
 
 int main()
  {
	printf("\t\tAlumna: FALCON MERCADO CRISTINA IRIRIAN\n");  //Titulos para identificar el ejercicio (decisión personal)
	printf("\t\tTaller de programación\n");
	printf("\tEjercicio: Calcular el perimetro de un triangulo equilatero\n\n");
	
	printf("Ingrese los valores\n"); //Indicación para pedir los valores a utilizar
    printf("Lado A:\n");
    scanf ("%d", &a);
 
    printf("Lado B:\n");
    scanf ("%d", &b);
 
    printf("Lado C:\n");
    scanf ("%d", &c);
 
    resultado = a+b+c; //Operación a realizar
    printf("El perimetro del triangulo equilatero es:%f\n\n",resultado); //Resultado solicitado
    
    	//Intento del ejercicio para calcular el area 
    	//Ejercicio en equipo del día 22 de octubre del 2020
    	
	
    h=sqrt(((pow((b/2),2))+(pow(c,2))));
    d=(b*(h/2));
    printf("Primera propuesta") ;
    printf("\tEl area del tringulo es:%f\n",d);

    return 0;
 
  }
 
 
 
