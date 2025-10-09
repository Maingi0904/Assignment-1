/*
 Name:Immaculate Nyambura Maingi
 Reg No:CT101/G/26509/25
 Date:27/09/2025
 Description:A withdrawal program for the ATM
 */


#include <stdio.h>

int main() {
    float initial_amount;
    float amount_to_withdraw;
    float balance;

    // prompt user to input initial amount
    printf("Enter initial amount in your account: ");
    scanf("%f", &initial_amount);

    balance = initial_amount;

    //Continue while balance is greater than 0
    while (balance > 0) {
        printf("\nYour current balance is: %.2f", balance);

        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount_to_withdraw);

        if (amount_to_withdraw > balance) {
            printf("Insufficient funds! You only have %.2f\n", balance);
        } else {
            balance -= amount_to_withdraw;
            printf("Withdrawal successful! New balance: %.2f\n", balance);
        }

        if (balance == 0) {
            printf("\nYour balance is zero. No more withdrawals allowed.\n");
        }
    }

    return 0;
}
