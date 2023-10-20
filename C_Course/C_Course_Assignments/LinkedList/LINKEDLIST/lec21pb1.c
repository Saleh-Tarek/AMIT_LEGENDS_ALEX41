#include <stdio.h>
#include <stdlib.h>
#include"lec21pb1.h"
int main()
{
    snode_t* start=NULL;
    start=CreateLinkedList();
    DisplayLinkedList(start);
    return 0;
}

snode_t* InsertatNodeAtBegining(snode_t *start,sint32 data)
{
    snode_t *temp=(snode_t*)malloc(sizeof(snode_t));
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}

void InsertatNodeAtEnd(snode_t *start,sint32 data)
{
    snode_t *ptr=start;
    snode_t *temp=(snode_t*)malloc(sizeof(snode_t));
    temp->info=data;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }

    ptr->link=temp;
    temp->link=NULL;
}


snode_t* CreateLinkedList(void)
{
    uint32 i,size;

    snode_t *start=NULL;

    printf("Please enter number of nodes:");
    scanf("%ld",&size);

    if (size<=0)
    {
        printf("invalid input:");
    }
    else
    {
        sint32 data;
        printf("Enter the 1st element:");
        scanf("%ld",&data);
        start=InsertatNodeAtBegining(start,data);
        
        for(i=1;i<size;i++)
        {
            printf("enter next data:");
            scanf("%ld",&data);
            InsertatNodeAtEnd(start,data);
        }
    }
  return start;
}


void DisplayLinkedList(snode_t *start)
{
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        snode_t *ptr=start;
        while(ptr!=NULL)   
        {
            printf("%ld ",ptr->info);
            ptr=ptr->link;
        }
        printf("\n");
    }
}