/*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date:30/10/2025
Description:A program to represent different floors and the total number of rooms per floor per room
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main() {
    int chain[BRANCHES][FLOORS][ROOMS];
    int totalOccupied = 0;

    srand(time(0));

    // Assign random occupancy (1 or 0) to each room
    for (int i = 0; i < BRANCHES; i++) {
        for (int j = 0; j < FLOORS; j++) {
            for (int k = 0; k < ROOMS; k++) {
                chain[i][j][k] = rand() % 2;
            }
        }
    }

    // Calculate the total number of occupied rooms across all branches
    for (int i = 0; i < BRANCHES; i++) {
        for (int j = 0; j < FLOORS; j++) {
            for (int k = 0; k < ROOMS; k++) {
                totalOccupied += chain[i][j][k];
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}








