/*
==================================================================================
Target	:	Single LinkedList 
Author	:	Tarek Saleh
Date  	:	19/09/2023
==================================================================================
Description:	Create a single linkedlist with variable number of nodes,
				display the data stored in each node, and delete a specific node.
			
Implementation:

1- Create list: 	
				snode_t* CreateLinkedList(void) - 
				snode_t* InsertNodeAtBeginning(snode_t* Copy_ptrStart, int Copy_s32Data)
				void InsertNodeAtEnd(snode_t* start, int data)


2- Display list:
				void DisplayLinkedList(snode_t * start)

3- delete Node:	
				snode_t* DeleteLinkedList(snode_t *start,sint32 data)


+
==================================================================================
*/




snode_t* InsertNodeAtBeginning(snode_t* Copy_ptrStart, int Copy_s32Data)
{
	snode_t* temp= (snode_t*) malloc(sizeof(snode_t));
	temp->info= Copy_s32Data;
	temp->link= Copy_ptrStart;
	Copy_ptrStart= temp; 
	return Copy_ptrStart;
}

void InsertNodeAtEnd(snode_t* start, int data)
{
	snode_t * ptr  = start;
	snode_t * temp = (snode_t*) malloc(sizeof(snode_t));
	temp->info=data;
//	printf("_2\n");
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
//		printf("_3\n");
	}
//	printf("_4\n");
	ptr->link=temp;
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

snode_t* DeleteLinkedList(snode_t *start,sint32 data)
{
	snode_t *ptr=start;
	snode_t *temp=NULL;
	if (ptr!=NULL)
	{
		while(ptr->link!=NULL)
		{
			if(ptr->link->info==data)
			{
    			break;
			}
			else
			{
				ptr=ptr->link;
			}
		}
		if(start->info==data)
		{
			temp=start;
		start=temp->link;
		free(temp);
		}
		else if(ptr->link!=NULL)
		{
			temp=ptr->link;
			ptr->link=temp->link;
			free(temp);
		}
		else
		{
			/**
			 * Do nothing
			 * */
		}
	}
	else
	{
 		printf("list is empty:");
	}

	return start;
}



