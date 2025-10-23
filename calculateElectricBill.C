/*
Name:Immaculate  Nyambura Maingi
Date: 23/10/2025
RegNO:CT101/G/26509/25
Description:A program that calculates electric bill using c function

*/

#include <stdio.h>

// Function prototype
int calculateElectricBill(int units);
//main function
int main() {
    int units, bill;

    printf("Enter number of units consumed:\n");
    scanf("%d", &units);
//function call
    bill = calculateElectricBill(units);

    printf("Total electric Bill = KSh. %d\n", bill);

    return 0;
}

// Function definition
int calculateElectricBill(int units) {
    int bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}
