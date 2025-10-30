/*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date:30/10/2025
Description:A program for storing a 1D array revenue of a hotel for seven days
*/
 #include<stdio.h>//preprocessor directive scanf(),printf()

int main() {
    int revenue[7];
    float total_revenue = 0;
    float average_revenue;

    printf("Enter the revenue for each of the 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &revenue[i]);
//calculate total weekly revenue
        total_revenue += revenue[i];
    }
//calculate average daily revenue
    average_revenue = total_revenue / 7;
//output the total weeekly and average daily revenue

    printf("\nTotal weekly revenue: %.2f\n", total_revenue);
    printf("Average daily revenue: %.2f\n", average_revenue);

    return 0;

 }
