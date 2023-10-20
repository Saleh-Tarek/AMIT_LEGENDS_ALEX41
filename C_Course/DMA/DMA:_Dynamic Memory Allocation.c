DMA: {Dynamic Memory Allocation}

arr[size];
scanf("%d",&size);

Rules and Conditions to proivde [DMA]:


1- Provide heap memory secion(RAM).
2- Provide standard library to deal with heap memory: stdlib.
#include <stdlib.h>
_______________________________

Memory Allocation:

1- malloc function:

void * malloc(#of bytes);
returns the address of the first byte.
int n;
scanf("%d",&n);
int *ptr1= (int *) malloc(n* sizeof(int));
float *ptr2= (float *) malloc(n* sizeof(float));
char *ptr3= (char *) malloc(n* sizeof(char));
/*What about structs???
*/
typedef struct{
	int var;
	char data;
}Mystruct;

Mystruct * ptr4= (Mystruct*) malloc(n*sizeof(Mystruct));
__________________________________________

2- calloc function : Contiguous allocation:

calloc function insitialise its memory with zero.


void * calloc(#of elements, size of one element);
ex:
int * ptr5 =(int *) calloc(n,sizeof(int));

____________________________________________

3- realloc function : Reallocate an existing memory

used to change size of previously allocated data.1

void * realloc(ptr to previously allocated data, new size);
ex:

int *ptr1= (int *) malloc(n* sizeof(int));
ptr1= (int *) realloc(ptr,NEW_n * sizeof(int));

either malloc or caloc or realloc they return:
1- valid address if the request is accepted.
2- Null is the request is rejected [Memory full].

int *ptr1= (int *) malloc(n* sizeof(int));
if(ptr1 !=NULL)
{
	c1
	c2
}
else
{
c1
//Allocation is not done ....   memory is full.
}

___________________________________________

4- free

void free(pointer to previously allocated data);

int *ptr1= (int *) malloc(n* sizeof(int));

free(ptr1);
Deallocation (delete) the previously allocated data
_________________________________________________
static allocated array: 
1- size must be fixed. And known at coding phase.
2- size can not be changed.
3- Automatic storage, array are deleted after the end of the block.
Dynamic allocated memory:
1- size can be variable. And known at run time.
2- size can be changed, using realloc function.
3- Use free to delete your allocated memory.
4- NOT RECOMMENDED IN EMBEDDED SYSTEMS. And
5- Memory allocation in heap is done randomly,
wasting of memory, ineffecient usage of memory,
safety issues in case of not reserving memory.
_____________________________________________



