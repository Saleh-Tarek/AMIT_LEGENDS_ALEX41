#include <stdio.h>
#include <stdlib.h>
#include"lec21pb5.h"
int main()
{
snode_t* start=NULL;
sint32 data;
start=singlelistcreatelist();
singlelist_displaylist(start);
if(start==NULL){
    printf("list is empty");
}else{
printf("enter the node you want to delete:");
scanf("%d",&data);
start=singlelinkedlistdelet(start,data);
singlelist_displaylist(start);

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

snode_t* singlelinkedlistdelet(snode_t *start,sint32 data){
snode_t *ptr=start;
snode_t *temp=NULL;
if (ptr!=NULL){
while(ptr->link!=NULL){
if(ptr->link->info==data){
    break;
}else{
ptr=ptr->link;
}

}if(start->info==data){
temp=start;
start=temp->link;
free(temp);
}else if(ptr->link!=NULL){
temp=ptr->link;
ptr->link=temp->link;
free(temp);
}
}
else{
 printf("list is empty:");
}

return start;
}
