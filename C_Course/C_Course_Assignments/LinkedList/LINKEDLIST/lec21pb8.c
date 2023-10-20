#include <stdio.h>
#include <stdlib.h>
#include"lec21pb8.h"
int main()
{
snode_t* start=NULL;
uint16 sum;
start=singlelistcreatelist();
singlelist_displaylist(start);
sum=singlelistSum(start);
if(start==NULL){
    printf("list is empty");
}else{
if(sum!=0){
printf("sum of nodes =%d",sum);
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


sint32 singlelistSum(snode_t *start){
uint16 sum=0u;
if (start!=NULL){
    while(start!=NULL){
        sum+=start->info;
        start=start->link;
    }
}else{
printf("list is empty ");

}

return sum;
}
