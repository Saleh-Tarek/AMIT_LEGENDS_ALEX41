/*
 ============================================================================
 Name        : Lab16.c 
 ========================================================
 Description+

 ============================================================================
*/

#include <stdio.h>
//#include <stdlib.h>
#include "Debug.h"

int main(void)
{
  int i =5;
  double f= 100;    
  //GOT_HERE;
  
  SHOW(5,"%x");
  SHOW(100/29.5,"%lf");

  MyDebug(i,f);


    return 0;
}
