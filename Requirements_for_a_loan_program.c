//C program
/*
Name:Immaculate Nyambura Maingi
Reg No:CT101/G/26509/25
Date:22/09/2025
Description:Qualification for a loan program
*/
#include<stdio.h>//preprocessor directive scanf(),printf()
//main function
int main(){
    int age;
    float income;

    printf("Enter age(years):\n");
    scanf("%d",&age);
    printf("Enter annual income(Shs.):\n");
    scanf("%f",&income);
    //Conditions for the loan
   if (age>=21 && income>=21000 ) {
    printf("Congratulations,you qualify for the loan\n");
}
    else
    {
        printf("Unfortunately,we are unable to offer you a loan at this time");
    }
  return 0;
}


















