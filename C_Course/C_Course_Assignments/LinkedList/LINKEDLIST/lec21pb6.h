#ifndef lec21pb6_H_INCLUDED
#define lec21pb6_INCLUDED
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

snode_t* singlelistcreatelist(void);
snode_t* singlelist_insertatbegining(snode_t *start,sint32 data);
void singlelist_insertatend(snode_t *start,sint32 data);
void singlelist_displaylist(snode_t *start);
snode_t *singlelistreverse(snode_t *start);


#endif // LINK_H_INCLUDED
