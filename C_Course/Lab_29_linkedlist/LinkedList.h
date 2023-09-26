#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node
{
	int info;
	struct node *link;
}snode_t;

snode_t* CreateLinkedList(void);

snode_t* InsertNodeAtBeginning(snode_t* Copy_ptrStart, int Copy_s32Data);

void InsertNodeAtEnd(snode_t* start, int data);

void DisplayLinkedList(snode_t * start);

typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short int uint16;
typedef signed short int sint16;
typedef unsigned long int  uint32;
typedef signed long int  sint32;
typedef float f32;
typedef double f64;
typedef long double f96;

#endif
