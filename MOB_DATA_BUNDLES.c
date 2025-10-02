/*
Name:Immaculate Nyambura Maingi
Reg No:CT101/G/26509/25
Date:1/10/2025
Description:A program that displays water bills
*/
#include<stdio.h>//Preprocessor directive scanf(),printf()
int main() {
    // Declare the variable to store user's choice
    int choice;

    // Display internet bundle choices
    printf("Available Internet Bundles:\n");
    printf("1. 100MB  = 50 KES\n");
    printf("2. 500MB  = 200 KES\n");
    printf("3. 1GB    = 350 KES\n");
    printf("4. 2GB    = 600 KES\n");

    // Prompt the user to enter their choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
// Display the selected bundle and cost
    switch (choice) {
        case 1:
            printf("1.You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("2.You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("3.You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("4.You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

