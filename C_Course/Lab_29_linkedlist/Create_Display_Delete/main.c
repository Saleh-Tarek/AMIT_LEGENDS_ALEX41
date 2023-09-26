/*
==================================================================================
Target	:	Single LinkedList 
Author	:	Tarek Saleh
Date  	:	19/09/2023
==================================================================================
Description:	Create a single linkedlist with variable number of nodes,
				display the data stored in each node, and delete a specific node.
			
Implementation:

1-	int main(void) function that calls: CreateLinkedList()
										DisplayLinkedList()

									
	
+==================================================================================
*/



#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

int main()
{

	snode_t * Local_start = NULL;
	int Local_Data;
	Local_start = CreateLinkedList();
	DisplayLinkedList(start);
	printf("Enter the information you want to delete.\n");
	scanf("%d",&Local_Data);
	DeleteLinkedList(Local_start, Local_Data);
	printf("List after delete operation.\n");
	DisplayLinkedList(start);

	return 0;
}