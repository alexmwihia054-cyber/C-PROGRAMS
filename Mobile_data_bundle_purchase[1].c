// Simple program (Mobile Data Bundle Purchase)
/*
Name: Alex Mwangi Mwihia
Reg No: CT100/G/26203/25
Description: Program to display mobile data bundle options and cost
*/
//start
#include <stdio.h>
//main
int main() {
    int option;

    // Display the menu
    printf("****** Mobile Data Bundle Menu ******\n");
    printf("1. 100 MB  @ KES 50\n");
    printf("2. 500 MB  @ KES 200\n");
    printf("3. 1 GB    @ KES 350\n");
    printf("4. 2 GB    @ KES 600\n");
    // prompt for option
    printf("Enter your choice (1-4): ");
    scanf("%d", &option);

    // Display selected bundle using switch
    switch (option) {
        case 1:
            printf("You selected 100 MB bundle. Cost: KES 50\n");
            break;
        case 2:
            printf("You selected 500 MB bundle. Cost: KES 200\n");
            break;
        case 3:
            printf("You selected 1 GB bundle. Cost: KES 350\n");
            break;
        case 4:
            printf("You selected 2 GB bundle. Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
    
    