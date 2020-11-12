#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
  for (x=0;x<=5;x++){ //Recorrer columnas
  	for (y=0;y<=5;y++){ // Recorrer filas 
     		 printf("[%d]\t",x+y); //0+0  luego 0+1 - 0+2  - 0+3
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
