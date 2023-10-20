#ifndef LEC21pb4_H_INCLUDED
#define LEC21pb4_H_INCLUDED
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

snode_t* singlelist_insertatbegining(snode_t *start,sint32 data);
void singlelist_insertatend(snode_t *start,sint32 data);
snode_t* singlelistcreatelist(void);
void singlelist_displaylist(snode_t *start);
snode_t* singlelist_insertatpos(snode_t* start,uint8 position,sint32 data);

#endif // LEC21_H_INCLUDED
