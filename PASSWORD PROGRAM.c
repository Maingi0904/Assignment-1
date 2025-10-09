/*
Name:Immaculate Nyambura Maingi
Reg No:CT101/G/26509/25
Date:1/10/2025
Description:A password program
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    const char correct[] = "1234";

    do {
        printf("Enter password: ");
        scanf("%19s", password);

        if (strcmp(password, correct) != 0) {
            printf("Incorrect password. Try again.\n");
        }
    } while (strcmp(password, correct) != 0);

    printf("Access Granted\n");
    return 0;
}
