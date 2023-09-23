/*****************************************
(1) C Program to store information (name, roll and marks) for a
student using structure and display it.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Print_data() ;
typedef struct {
    char Name[30];
    unsigned int roll ;
    float marks ;

}student_std ;

student_std StudentType ;

int main()
{
    strcpy(StudentType.Name , "Mohamed Ali") ;
    StudentType.roll = 10 ;
    StudentType.marks = 20.5 ;

    Print_data(&StudentType) ;
    return 0 ;
}

void Print_data(student_std*ptr){
    printf("Student name  : %s \n",ptr->Name);
    printf("Student roll  : %i \n",ptr->roll);
    printf("Student marks : %0.2f \n",ptr->marks);

}

