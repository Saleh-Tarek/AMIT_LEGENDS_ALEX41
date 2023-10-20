#ifndef LEC21pb1_H_INCLUDED
#define LEC21pb1_H_INCLUDED

typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short int uint16;
typedef signed short int sint16;
typedef unsigned long int  uint32;
typedef signed long int  sint32;
typedef float f32;
typedef double f64;
typedef long double f96;

typedef struct node{
sint32 info;
struct node *link;
}snode_t;

snode_t* InsertatNodeAtBegining(snode_t *start,sint32 data);
void InsertatNodeAtEnd(snode_t *start,sint32 data);

snode_t* CreateLinkedList(void);
void DisplayLinkedList(snode_t *start);

#endif 
