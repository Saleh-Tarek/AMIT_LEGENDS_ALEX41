Single (Singly) LinkedList:

Contain: 1- Date 2- Pointer to next node.

declaration:
1-
typedef struct node
{
	int info;
	struct node * link;
} Node_t;
2-
typedef struct node
{
	//Data
	char name[20];
	int id;
	float marks;
	//Pointer to next node
	struct node * Next;
	struct node * Prev;
} Node_t;
________________
Note_t obj1, obj2, obj3; 

_______________________________
Implementation:

1- Create list.
2- Display list
3- Count node
4- Search
5- Insert at beginning
6- Insert at end
7- Insert after node
8- Insert before node
9- Insert at position
10- delete Node
11- reverse list
____________________________
Node_t * start = NULL;
Node_t * head = NULL;
____________________________

Traversing through a single linked list:


1- Moving a pointer forward:

Node_t * ptr =start;
ptr = ptr->link;
printf("%d\n",ptr->info);
_________
2- to print list content:

Node_t* ptr=(Node_t*)	malloc(sizeof(Node_t));

ptr = start;
while(ptr != NULL)
{
	printf("%d\n",ptr->info );
	ptr = ptr->link;
}

3- to count the nodes:

ptr = start;
int count=0;
while(ptr != NULL)
{
	printf("%d\n",ptr->info );
	ptr = ptr->link;
	count++;
}
_________________________

4- Searching in a linked list:

int position=1;

while(ptr !=NULL)
{
	if (ptr-> info == x)
		break;
	position++;
	ptr=ptr->link;
}
if(ptr==NULL)
	printf("%d not found in the list",x);
else
	printf("%d found at position %d",x,position);

______________________________________________
Finding a pointers in a single linked list:


1- finding a pointer to last nodes
2- finding a pointer to the node before the last nodes
3- finding a pointer to a node with particular data
4- finding a pointer to a node before a node with particular data
5- finding a pointer to a node at particular position 

-----------------------------------------------
1:

ptr = start;

while (ptr->link!=NULL)
{
	ptr=ptr->link;
}
-----------------------------------------------
2:
ptr = startl
while(ptr ->link->link != NULL)
{
	ptr= ptr->link;
}
-----------------------------------------------
3:
ptr =start;
while (ptr!=NULL)
{
	if(ptr->info ==x)
		break;
	ptr=ptr->link;
}
if(ptr==NULL)
	printf("not found in the list");
else
	printf("found");
-----------------------------------------------
4:
ptr =start;
while((ptr->link!=NULL)&& (ptr->link->info!=x))
{
	ptr=ptr_link;
}

4:
ptr =start;
while((ptr->link!=NULL)
{
	if (ptr->link->info==x)
		break;
	ptr=ptr_link;
}
if(ptr->link ==NULL)
	printf("%d not found",x);
-----------------------------------------------
5:
ptr =start;
int i;
for (i =1; (ptr!=NULL)&&(i<n);i++)
{
	ptr=ptr->link;
}
if(ptr ==NULL)
	printf("INValid Position");
else
	printf("Position found");// the pointer is pointing to the node with thre required position.

-----------------------------------------------

Insertion in a single linked list:


1- Insertion in empty List
2- Insertion at the beginning
3- Insertion at the end 
4- Insertion in between nodes

-----Fixed steps in insertion----------

Node_t * temp= (Node_t *) malloc (sizeof(Node_t));
temp ->info = data;
______________________________
1: Insertion in empty List

1- create the temp node, update info
2- now temp is the only node in the list

1-temp->link=NUll; // as it the last node
//or
1-temp->link=start; // start at this point equal null
2-  start =temp; // as temp is the first node

/* the same two statements are used in insertion at begining,
	so one function with the same statements can handle both cases.
	Only in single linked list.
*/


______________________________
2:Insertion at the beginning

temp->link =start;
start=temp;
/**
 * Note:
 * that the order of the two steps is very important
 * if reversed, you will lose the reference of the list
 * and temp will point to itself, when you process list now,
 * you will be stuck in infinite loop
 * */

______________________________
3: Insertion at the end

1- find a pointer pointing to the last node
2- ptr->link = temp
3- temp->link=NULL

______________________________
4: Insertion in between nodes

1- find a pointer to point to the first of the two nodes.
2- allocate new node
3- make temp point to second
4- make second point to temp

temp->link= ptr->link;
ptr->link=temp;
/**
 * Note:
 * The order of the two statement is important,
 * if reversed, the link will be broken
 * */
______________________________

11- reverse list

______________________________
7: Insert after node
	Given a value of data,
	insert after this value.
	ex: x=26;


	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->info == x)
			break;
		ptr=ptr->link;
	}
	if(ptr==NULL)
		printf("Not found");
	else
	{
		temp->link=ptr->link;
		ptr->link=temp;
	}

______________________________
8- Insert before node
	Given a value of data,
	insert Before this value.
	ex: x=45;

ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->link->info == x)
			break;
		ptr=ptr->link;
	}
	if(ptr->link==NULL)
		printf("Not found");
	else
	{
		temp->link= ptr->link;
		ptr->link=  temp;
	}
	/**
	 * Note:
	 * check cae: insertion before the first node.
	 * In this case call insert at beginning.
	 * */
______________________________
9- Insert at position k=4
1- Get the pointer to point to position k-1
ptr =start;
for(int i=1; (ptr!=NULL)&&(i<k-1);i++)
{
	ptr=ptr->link;
}
if(ptr==NULL)
	printf("Not found");
else
{
	temp->link=ptr->link;
	ptr->link=temp;
}
______________________________
10- delete Node
1- Deletion of first node
2- Deletion of the only node
3- Deletion in between the nodes
4- Deletion at end

Sequence:

1- make a pointer to point to the node that will be deleted.
2- rearrange links, remove node logically.
3- free(temp)
______________________________
10-1- Deletion of first node

start= start->link;
free(temp);
______________________________
10-2- Deletion of the only node

start->info=1o;
start->link=NULL;

start=NULL;
//or
start=start->link;
free(temp);
//same as delete at first
______________________________
10-3- Deletion in between the nodes

//make a pointer two the node before specific value (ptr)

temp=ptr->link;
ptr->link=temp->link;
free(temp);
______________________________
10-4- Deletion at end
ptr->link=NULL;
//or
ptr->link=temp->link;
free(temp);
______________________________
11- reverse list
// create three pointers , ptr, next, prev

ptr=start;
prev=NULL;
while(ptr!=NULL)
{
	next=ptr->link;
	ptr->link=prev;
	prev=ptr;
	ptr=next;

}
start=prev;

______________________________

______________________________

______________________________









