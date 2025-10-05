//simple program(water bill calculator)
/*
Name:Alex Mwangi Mwihia 
Reg No:CT100/G/26203/25
Description:simple program to determine exam eligibility
*/
#include <stdio.h>
//main
int main(){
//declare variables 
    float units,bill;
   // prompt for number of units
    printf("Enter number of units consumed: ");
    scanf("%f",&units);
    //compute bill
    if(units<=30)
    {
    bill=units*20;
     }else 
     if(units<=60)
     {
     bill=units*25;
     }else
     {
     bill=units*30;
     }
     //display total bill INVESTORS KES
     printf("\nTotal water bill:KES %.2f ",bill);
     return 0;
}