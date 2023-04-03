/*
*File: caculate.h
*Author: Nguyen Phi Hung
*Date: 11/03/2023
*Description: Hearder file for Calculating sum of input numbers, Input numbers have different data types (int, double)
*/
#ifndef __CALCULATE_H
#define __CALCULATE_H

#include<stdio.h>
#include<stdarg.h>

/*Function to calculates the sum of numbers which have type int and double */
void calculateSum(int numInput,...);

#endif