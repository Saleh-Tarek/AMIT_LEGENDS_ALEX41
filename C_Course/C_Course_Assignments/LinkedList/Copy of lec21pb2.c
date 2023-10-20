#include <stdio.h>
#include <stdlib.h>
#include"lec21pb2.h"
int main()
{
    sint32 val,data;
    snode_t* start=NULL;
    start=singlelistcreatelist();
    singlelist_displaylist(start);
    printf("enter value to insert after:");
    scanf("%ld",&val);
    printf("enter new node:");
    scanf("%ld",&data);
    singlelist_insertafter(start,val,data);
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
void singlelist_insertafter(snode_t* start,sint32 valueafter,sint32 data){
snode_t* ptr=start;
while(ptr!=NULL){
    if(ptr->info==valueafter){
        break;
    }
    else{
    ptr=ptr->link;
    }
}
if(ptr==NULL){
printf("%d not found in list",valueafter);
}else{
snode_t *temp=(snode_t*)malloc(sizeof(snode_t*));
temp->info=data;
temp->link=ptr->link;
ptr->link=temp;
}
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
