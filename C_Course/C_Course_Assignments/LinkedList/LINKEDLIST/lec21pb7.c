#include <stdio.h>
#include <stdlib.h>
#include"lec21pb7.h"
int main()
{
snode_t* start=NULL;
sint32 data;
start=singlelistcreatelist();
singlelist_displaylist(start);
if(start==NULL){
    printf("list is empty");
}else{
data=singlelistmidnode(start,singlelist_countnodes(start));
if (data!=0){
    printf("middle node =%ld",data);
}
else{
    printf("list is empty");
}

}


return 0;
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

uint8 singlelist_countnodes(snode_t *start){
uint8 counter=0u;
snode_t *ptr=start;
     while(ptr!=NULL){
        counter++;
        ptr=ptr->link;
     }
return counter;
}

sint32 singlelistmidnode(snode_t *start,uint8 numofnode){

snode_t *ptr=start;
if(ptr!=NULL){
    uint32 counter=1;
    numofnode=(numofnode/2)+1;
   while(ptr!=NULL){
   if(counter==numofnode){
   return ptr->info;
   }
    ptr=ptr->link;
    counter++;
   }
}
 else{
    printf("list is empty:");
}
return 0;
}

