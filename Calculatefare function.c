 /*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date:23/10/2025
Description:A program used to calculate total fare using C function
*/

#include<stdio.h>
//function prototype
int fare(int Km);

int main(){
    int result, Km;

    printf("Enter number of kilometer\n");
    scanf("%d", &Km);

    //function call
    result=fare(Km);
    printf("fare=kes %d\n", result);
    return 0;
}

//function declaration
int fare(int Km){
    int F;
    F=50*Km;
    return F;
}
