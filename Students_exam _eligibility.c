/*
 Name:Immaculate Nyambura Maingi
 Reg No:CT101/G/26509/25
 Date:1/10/2025
 Description:A program to determine exams eligibilityfor students
 */
 #include<stdio.h>//preprocessor directive scan(),printf()
 int main (){
     char name [21]={};
     float percentage_attendance;
     float average_marks;

     printf("Enter name:\n");
     scanf("%s",&name);

     printf("Enter percentage attendance(%):\n");
     scanf("%f",&percentage_attendance);

     printf("Enter average marks(marks):\n");
     scanf("%f",&average_marks);

     if (percentage_attendance>=75 & average_marks>=40) {
        printf("Eligible for the exam");
     } else {
     printf("Not eligible");
     }
  return 0;
 }


