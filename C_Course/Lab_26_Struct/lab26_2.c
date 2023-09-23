/**************************************************
(2) C function to add two complex numbers by passing two
structures to a function and display the results.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    unsigned int Real1 ;
    signed int complex1 ;

}Number1;

typedef struct{
    unsigned int Real22 ;
    signed int complex22 ;

}Number2;

Number1 Num1 ;
Number2 Num2 ;

void Result(Number1 *ptr1 , Number2 *ptr2);
void get_data(Number1 *ptrx , Number2 *ptry);

int main()
{
    get_data(&Num1,&Num2);
    Result(&Num1,&Num2);


    return 0 ;
}

void get_data(Number1 *ptrx , Number2 *ptry){

    printf("enter the first real number of first object : ");
    scanf("%i" ,&(ptrx->Real1));
    printf("enter the first complex number of first object : ");
    scanf("%i",&(ptrx->complex1));
    printf("*********************************\n");
    printf("enter the second real number of first object : ");
    scanf("%i",&(ptry->Real22));
    printf("enter the second complex number of first object : ");
    scanf("%i",&(ptry->complex22));

}
void Result(Number1 *ptr1 , Number2 *ptr2){
    unsigned int realresult = (ptr1->Real1)+(ptr2->Real22) ;
    signed int complexresult = (ptr1->complex1)+(ptr2->complex22) ;
    printf("Result = (%i) + (%i)i",realresult , complexresult);

}


