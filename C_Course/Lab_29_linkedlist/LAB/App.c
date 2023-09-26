/*
==================================================================================
Author: 
Name: 
Target: 
==================================================================================
Description:
+
==================================================================================
*/

#include <stdint.h>
#include "LinkedList.h"
int  main()
{
	snode_t* ptr= (snode_t*) malloc( sizeof(snode_t));
	scanf("%d",&ptr->intol);
	ptr->link->info= 5;
	return 0;
}