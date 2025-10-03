//C program
/*
  Name:Immaculate Nyambura Maingi
  Reg No:CT101/G/26509/25
  Date :21/09/2025
  Description:Program to compute simple interest
  S_I = P *rate/100 * time
 */
 #include<stdio.h>//preprocessor directive scanf(),printf()

 int main(){
 //variable declaration
 float principle,rate,time,interest;

 //prompt the user to enter amount
 printf("Enter Principle amount:\n");
 scanf("%f",&principle);

 //prompt the user to enter rate
 printf("Enter rate:\n");
 scanf("%f",&rate);

 //prompt the user to enter time
 printf("Enter time:\n");
 scanf("%f",&time);

 //compute interest
 interest = principle * rate/100 *time;

 //display interest
 printf("Simple Interest is kshs. %.2f\n",interest);

 return 0;

 }
