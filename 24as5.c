#include <stdio.h>

#define CITY_COUNT 2
#define WEEK_COUNT 7

int main() {
    int temperatures[CITY_COUNT][WEEK_COUNT];
    int city, week;

    // Get temperatures from user
    for (city = 0; city < CITY_COUNT; city++) {
        printf("Enter temperatures for city %d:\n", city + 1);
        for (week = 0; week < WEEK_COUNT; week++) {
            printf("  Week %d: ", week + 1);
            scanf("%d", &temperatures[city][week]);
        }
    }

    // Display temperatures
    for (city = 0; city < CITY_COUNT; city++) {
        printf("Temperatures for city %d:\n", city + 1);
        for (week = 0; week < WEEK_COUNT; week++) {
            printf("  Week %d: %d\n", week + 1, temperatures[city][week]);
        }
    }

    return 0;
}
