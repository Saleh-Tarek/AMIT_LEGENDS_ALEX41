/***************************************
(3) C Function to calculate the difference between two time
periods using structures

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int Hour ;
    int Minutes ;
    int seconds ;
} Time ;

Time period1 , period2 , difference ;

Time display_result (Time *ptr1 , Time *ptr2) ;

int main ()
{
    printf("Enter the first period time (hours minutes seconds): ");
    scanf("%d %d %d", &period1.Hour, &period1.Minutes, &period1.seconds);

    printf("Enter the  second period (hours minutes seconds): ");
    scanf("%d %d %d", &period2.Hour, &period2.Minutes, &period2.seconds);

    difference = display_result (&period1 , &period2) ;
    printf("Time difference: %d hours, %d minutes, %d seconds",
           difference.Hour, difference.Minutes, difference.seconds);

    return 0;
}

Time display_result (Time *ptr1 , Time *ptr2){
    Time Diffrence ;

    int totalsecondP1 = ptr1->Hour*3600 + ptr1->Minutes * 60 + ptr1->seconds ;
    int totalsecondP2 = ptr2->Hour*3600 + ptr2->Minutes * 60 + ptr2->seconds ;
    int secondDiffrence = totalsecondP2 - totalsecondP1 ;

    Diffrence.Hour = secondDiffrence/3600 ;
    Diffrence.Minutes = (secondDiffrence % 3600)/60 ;
    Diffrence.Minutes = (secondDiffrence % 3600) % 60 ;

    return (Diffrence) ;
}


