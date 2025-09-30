/*
Name:Immaculate Nyambura Maingi
Reg No:CT101/G/26509/25
Date:1/10/2025
Description:A program that displays water bills
*/
#include<stdio.h>//Preprocessor directive scanf(),printf()

int main(){
    char name[23]={};
    double water_units_consumed;
    double Total_bill;
//User prompts to be input
 printf("Enter your name:\n");
 scanf("%s",&name);

 printf("Enter number of water units consumed:\n");
 scanf("%lf",&water_units_consumed);

 //conditions to be adhered to
 if (water_units_consumed<=30){
     Total_bill=water_units_consumed *20;
 }
   else if (water_units_consumed>30 && water_units_consumed<=60){
    Total_bill=water_units_consumed *25;
   }
   else if (water_units_consumed>60){
     Total_bill=water_units_consumed *30;
   }


   printf("The total bill is:%.2lf\n",Total_bill);
 return 0;
}



