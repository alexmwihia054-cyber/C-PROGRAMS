//simple c program to compute surface area and volume of a cylinder
/*
Name ;Alex Mwangi Mwihia 
Reg;CT100\G\26203\25
description;units for this semester program
*/
#include <stdio.h>
#include <math.h>

//main function
int main (){
    //declare variables
    float pi=22/7,radius,height,volume,surfacearea;
    
    //prompt for radius
    printf("Enter radius in cm: ");
    scanf("%f",&radius);
    
    //prompt for height
    printf("Enter height in cm: ");
    scanf("%f",&height);
    
    //compute volume
    volume = pi * pow((radius),2) * height;
    
    //compute surface area
   surfacearea = (2 * pi * pow((radius),2)) + (2 * pi * radius * height);
   
   //display volume and surface area
   printf("\n Volume of the cylinder is: %.2f cm³",volume);
   printf("\n Surface area is: %.2f cm²",surfacearea);
   
    return 0;
}