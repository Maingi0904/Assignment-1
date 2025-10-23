
/*
Name:Immaculate  Nyambura Maingi
Date:23/10/2025
RegNO:CT101/G/26509/25
Description:A c program that inputs temperature in fahrenheit and outputs temperature in celcius
*/

#include<stdio.h>

float celcius(float F);

int main(){
    float result,F;
    printf("Enter fahrenheit\n");
    scanf("%f",&F);

    //function call
    result=celcius(F);
    printf("The celcius is = %.2f\n",result);
    return 0;
}

//function declaration
float celcius(float F){
    float C;
    C=(F-32)*5/9;
    return C;
}
