//simple c program to compute compound intrest
/*
Name ;Alex Mwangi Mwihia 
Reg;CT100\G\26203\25
description;units for this semester program
*/
#include <stdio.h>
#include <math.h>
// main function
int main(){
    //declare variables
    float principle,rate,time,years,Amount;
    
    //prompt for priciple amount
    printf("Enter principle amount in Ksh: ");
    scanf("%f",&principle);
    
    //prompt for rate
    printf("Enter rate in decimal : ");
    scanf("%f",&rate);
    
    //prompt for time
    printf("Enter time: ");
    scanf("%f",&time);
    
   // prompt for years
   printf("Enter number of years: ");
   scanf("%f",&years);
    
     //compute Amount
    Amount = principle * pow((1 + rate/years),time);
    
    //display amount
    printf("Final amount is:Ksh %.2f",Amount);
    
    return 0;
}