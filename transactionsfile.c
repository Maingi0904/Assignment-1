/*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date: 06/11/2025
Description:A program for storing transactions done
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int n, i;

    // --- Step 1: Create and write to the file (sales.txt) ---
    file = fopen("sales.txt", "w"); // create file in write mode
    if (file == NULL) {
        printf("Error creating file!\n");
        exit(1);
    }

    printf("Enter number of sales transactions: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount); // write each amount on a new line
    }

    fclose(file);
    printf("\nSales amounts successfully saved to sales.txt\n\n");

    // --- Step 2: Read the amounts and calculate total sales ---
    file = fopen("sales.txt", "r"); // open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    total = 0.0;
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    // --- Step 3: Display the total sales for the day ---
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
