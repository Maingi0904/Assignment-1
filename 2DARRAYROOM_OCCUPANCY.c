/*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date:30/10/2025
Description:A program for assigning and tracking the rooms occupied and number of vacant rooms
*/



#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int occupancy[5][10];
    int occupied_rooms, vacant_rooms;
    srand(time(NULL));

    // Assign random occupancy
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // 0 or 1
        }
    }

    // Display occupancy per floor
    for (int i = 0; i < 5; i++) {
        occupied_rooms = 0;
        vacant_rooms = 0;
        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occupied_rooms++;
            } else {
                vacant_rooms++;
            }
        }
        printf("Floor %d: %d occupied, %d vacant\n", i + 1, occupied_rooms, vacant_rooms);
    }

    return 0;
}
