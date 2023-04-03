/*
*File: calculate.c
*Author: Nguyen Phi Hung
*Date: 11/03/2023
*Description: define functions which were declarated in header file
*/
#include<calculate.h>
/*
*Function: calculateSum
*Description: This function calculates the sum of numbers which have type int and double
*Input: 
*   numInput: number of numbers which need to be caculated sum
*   The numerals with quantity numInput, these may have type int or double
*Output:
*   sum of numbers
*/
void calculateSum(int numInput,...) 
{
    /*variable save sum of double numbers*/
    double sumDouble = 0; 
    /*variable save sum of int numbers*/                  
    int sumInt = 0;                     
    va_list ptr1, ptr2;                 
    va_start(ptr1, numInput);          
    va_start(ptr2, numInput);
    for(int i = 0; i < numInput; i++)
    {
        /*variable save number have type double*/
        float temp1 = va_arg(ptr1,double); 
        /*variable save number have type int*/     
        int temp2 = va_arg(ptr2,int);          
        if(temp1 != 0) sumDouble += temp1;           
        else if(temp1 == 0) sumInt +=temp2;       
    }                                         
    va_end(ptr1);                               
    va_end(ptr2);
    printf("Sum of numbers: %.2f\n",sumDouble+sumInt);
}