//simple c program to display your height,phone number and weight
/*
Name:Alex Mwangi
Reg No:CT100/G/26203/25
Description:Program to display your height, phone No and weight
*/
#include <stdio.h>

int main(){
    float height,weight;
    char phoneNo[10];
    //request for height
    printf("Enter your height in cm: ");
    scanf("%f",&height);

    //request for phone number
    printf("Enter your phone no: ");
    scanf("%s",&phoneNo);

    //request for weight
    printf("Enter your weight in Kg: ");
    scanf("%F",&weight);

    //display entered details
    printf("\n***Your details***\n");
    printf(" Your Height is: %.2f cm\n",height);
    printf("Your Phone No is: %s\n",phoneNo);
    printf("Your weight is: %.2fKg\n",weight);

    return 0;
}
