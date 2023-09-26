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

#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

snode_t* InsertNodeAtBeginning(snode_t* Copy_ptrStart, int Copy_s32Data)
{
	snode_t* temp= (snode_t*) malloc(sizeof(snode_t));
	temp->info= Copy_s32Data;
	temp->link= NULL;
	Copy_ptrStart= temp; 
	return Copy_ptrStart;
}

void InsertNodeAtEnd(snode_t* start, int data)
{
	snode_t * current_ptr  = start;
	snode_t * temp = (snode_t*) malloc(sizeof(snode_t));
	temp->info=data;
//	printf("_2\n");
	while(current_ptr->link!=NULL)
	{
		current_ptr=current_ptr->link;
//		printf("_3\n");
	}
//	printf("_4\n");
	current_ptr->link=temp;
	temp->link=NULL; 
}

void DisplayLinkedList(snode_t * start)
{
	if(start==NULL)
	{
		printf("List is empty.\n");
	}
	else
	{
		snode_t *ptr= start;
//			printf("_6\n");

		while(ptr!=NULL)
		{
//				printf("_7\n");

			printf("%d\t",ptr->info);
			ptr=ptr->link;
		}
		printf("\n");
	}
}



snode_t* CreateLinkedList(void)
{
	sint32 Local_s32Size, Local_s32Iteratori;

	snode_t * Local_ptrHead = NULL;
	printf("Please enter the number of nodes.\n");
	scanf("%ld",&Local_s32Size);
	if(Local_s32Size<=0)
	{
		printf("Invalid Input.\n");
	}
	else
	{
		int Local_s32Data,i;
		printf("Please enter the first node data.\n");
		scanf("%d",&Local_s32Data);
		/**
		 * Here is the bug, this function should return the start.
		 * if not the Local_ptrHead the InsertNoteAtEnd takes 
		 * is the same as the sent to the InsertAtBeginning 
		 * which is NULL.
		 * */
		Local_ptrHead =InsertNodeAtBeginning(Local_ptrHead,Local_s32Data);
		for(Local_s32Iteratori=1;Local_s32Iteratori<Local_s32Size;Local_s32Iteratori++)
		{
			printf("Enter the next data.\n");
			scanf("%d",&Local_s32Data);
//			printf("_1\n");

			InsertNodeAtEnd(Local_ptrHead,Local_s32Data);
//			printf("_5\n");		
		}
	}
	return Local_ptrHead;
}

