#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
 
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
  		if (x<=y) {
	printf("[0,0]",x,y);
    } else {
    	 printf("[%d,%d]",x,y);
	}	
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
