#include <stdio.h>

int main() {
    int choice;
    float speed, distance, time;

    printf("Choose what you want to calculate:\n");
    printf("1. Speed\n");
    printf("2. Distance\n");
    printf("3. Time\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter distance (in km): ");
            scanf("%f", &distance);
            printf("Enter time (in hours): ");
            scanf("%f", &time);

            if (time == 0) {
                printf("Time cannot be zero.\n");
            } else {
                speed = distance / time;
                printf("Speed = %.2f km/h\n", speed);
            }
            break;

        case 2:
            printf("Enter speed (in km/h): ");
            scanf("%f", &speed);
            printf("Enter time (in hours): ");
            scanf("%f", &time);

            distance = speed * time;
            printf("Distance = %.2f km\n", distance);
            break;

        case 3:
            printf("Enter distance (in km): ");
            scanf("%f", &distance);
            printf("Enter speed (in km/h): ");
            scanf("%f", &speed);

            if (speed == 0) {
                printf("Speed cannot be zero.\n");
            } else {
                time = distance / speed;
                printf("Time = %.2f hours\n", time);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
