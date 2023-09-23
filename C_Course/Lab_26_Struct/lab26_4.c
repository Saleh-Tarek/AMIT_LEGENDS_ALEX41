/****************************************************+

(4) C Function to store information (name, id and grade) for 10
students in array of structures using pointers and another
function to print all the structures using pointers
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STUDENT_NUMBERS 2

typedef struct {
    char name[30] ;
    unsigned int id ;
    float grade ;

}Student ;

Student ArrStudent[STUDENT_NUMBERS] ;

void Store_data(Student *ptr,unsigned int numbers);
void printStudents( Student *ptr, unsigned int numbers);

int main (){

    Store_data(ArrStudent,STUDENT_NUMBERS) ;
    printStudents(ArrStudent,STUDENT_NUMBERS);

    return 0 ;
}

void Store_data(Student *ptr,unsigned int numbers){
    printf("enter the information of Students : \n");
    for(int i =0 ; i<numbers ;i++){
    printf("name of %i student is : ",i+1) ;
    fflush(stdin) ;
    gets(ptr[i].name);
    printf("ID of %i student is : ",i+1) ;
    scanf("%i",&ptr[i].id);
    printf("Grade of %i student is : ",i+1) ;
    scanf("%f",&ptr[i].grade);
    }

}
void printStudents( Student *ptr, unsigned int numbers) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < numbers; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", ptr[i].name);
        printf("ID: %d\n", ptr[i].id);
        printf("Grade: %0.2f \n", ptr[i].grade);
        printf("\n");
    }
}




