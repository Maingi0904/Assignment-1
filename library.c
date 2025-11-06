/*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date: 06/11/2025
Description:A program for tracking borrowed books
*/




#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode (create if it doesn't exist)
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);

    fclose(file);
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
