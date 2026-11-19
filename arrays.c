#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ========== 1D Array – Weekly Revenue ==========
    float revenue[7];
    float total = 0.0, average;
    int i, j, k;

    printf("=== Weekly Revenue Tracker ===\n");
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
    average = total / 7;
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n\n", average);

    // ========== 2D Array – Room Occupancy (One Branch) ==========
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(NULL));   // for random values

    printf("=== Room Occupancy (One Branch) ===\n");
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;   // 0 or 1
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d → Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }
    printf("\n");

    // ========== 3D Array – Multiple Branches ==========
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("=== Multiple Branches Occupancy ===\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;
                if (chain[i][j][k] == 1)
                    totalOccupied++;
            }
        }
    }
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}
