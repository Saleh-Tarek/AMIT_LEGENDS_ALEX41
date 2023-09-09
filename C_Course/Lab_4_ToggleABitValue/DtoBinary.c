/*
==========================================================================================
Diploma     :   Legends of - Amit  Group 41
Target      :   C 
Name        :   
Program     :   Convert Decimal to Binary
Author      :   Tarek Saleh
==========================================================================================
Description :   
+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

#define ZERO_VALUE                                              0
#define ONE_VALUE                                               1
#define TRUE_VALUE												1
#define FALSE_VALUE												0
#define ERROR_VALUE                                            -1
#define EXECUTION_SUCCESS                             			0                                                                   
#define EXECUTION_FAILED                                        1
#define TWO_VALUE                                               2

/*-------------------------        Function Declaration          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned long int APP_u32_tConvertToBinary( signed long int Copy_s32_tNumber);

/*---------------------------------------------------------------------------------------*/


int main (){
	unsigned char Local_u8_tFlag=0;
    unsigned short int Local_u16_tResultNum=0;
    signed long int Local_s32_tNumber;

    printf("\n* Please inter a number :\n");
    if (scanf("%ld",&Local_s32_tNumber) != 1 )
    {
        printf("\n* ERROR! Invalid Input  *\n");
        return 1;
    }
    if(Local_s32_tNumber<0)
    {
    	Local_u8_tFlag=1;
    	Local_s32_tNumber *=-1;
    }
/*---------------------------------------------------------------------------------------*/
/*-------------------------            Function Call             ------------------------*/
/*---------------------------------------------------------------------------------------*/
    Local_u16_tResultNum = APP_u32_tGetMaxZerosCount(Local_s32_tNumber);

    printf("\n\t\t*OUTPUT*\nThe maximum number of zeros in %lu is %hu\n",APP_u32_tConvertToBinary(Local_s32_tNumber),Local_u16_tResultNum);
    return 0;
}

unsigned long int APP_u32_tConvertToBinary( signed long int Copy_s32_tNumber)


{
 signed long int Local_s32_tTempNum, Local_u32_tBase = 1, Local_s32_tBinaryNum=0;
    unsigned short int Local_u32_tRemainder;

    Local_s32_tTempNum = Copy_s32_tNumber;

    while(Local_s32_tTempNum > 0)
    {
        Local_u32_tRemainder = Local_s32_tTempNum % 2;
        Local_s32_tBinaryNum = (Local_u32_tRemainder * Local_u32_tBase) + Local_s32_tBinaryNum;
        Local_s32_tTempNum /= 2;
        Local_u32_tBase *= 10;
    }
    printf("\nThe binary representation of %ld = %ld\n", Copy_s32_tNumber,Local_s32_tBinaryNum);
return Local_s32_tBinaryNum;
}


