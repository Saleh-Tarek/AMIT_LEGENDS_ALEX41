#include <stdio.h>
#include <stdlib.h>
#include"lec21pb4.h"
int main()
{
    snode_t* start=NULL;
    sint32 data;
    uint32 position;
    start=singlelistcreatelist();
    singlelist_displaylist(start);

    printf("enter position to insert :");
    scanf("%ld",&position);
    printf("enter new node :");
    scanf("%ld",&data);
    start=singlelist_insertatpos(start,position,data);
    singlelist_displaylist(start);

    return 0;
}
snode_t* singlelist_insertatbegining(snode_t *start,sint32 data){
snode_t *temp=(snode_t*)malloc(sizeof(snode_t));
temp->info=data;
temp->link=start;
start=temp;
return start;

}
void singlelist_insertatend(snode_t *start,sint32 data){
snode_t *ptr=start;
snode_t *temp=(snode_t*)malloc(sizeof(snode_t));
temp->info=data;
while(ptr->link!=NULL){
    ptr=ptr->link;
}
ptr->link=temp;
temp->link=NULL;

}


snode_t* singlelistcreatelist(void){
uint32 i,n;
snode_t *start=NULL;
printf("please enter number of nodes:");
scanf("%ld",&n);
if (n==0){
printf("invalid input:");
}else{
sint32 data;
printf("enter the 1st element:");
scanf("%ld",&data);
start=singlelist_insertatbegining(start,data);
  for(i=1;i<n;i++){
    printf("enter next data:");
    scanf("%ld",&data);
    singlelist_insertatend(start,data);
  }
  }
  return start;

}


void singlelist_displaylist(snode_t *start){
if(start==NULL){
    printf("list is empty");
}
else{
     snode_t *ptr=start;
     while(ptr!=NULL){
        printf("%ld ",ptr->info);
        ptr=ptr->link;
     }
     printf("\n");
   }
}
snode_t* singlelist_insertatpos(snode_t* start,uint8 position,sint32 data){
if(position==1){
    start=singlelist_insertatbegining(start,data);
}else{
    snode_t *ptr=start;
    uint8 i;
    for(i=1;(ptr!=NULL)&&(i<(position-1));i++)
    {
     ptr=ptr->link;
    }
    if(ptr==NULL){
     printf("position not found");
    }else{
     snode_t *temp=(snode_t*)malloc(sizeof(snode_t));
     temp->info=data;
     temp->link=ptr->link;
     ptr->link=temp;
    }
}
return start;
}
