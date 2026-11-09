#include <stdio.h>

// Function to check if triangle is valid
int isValidTriangle(int angle1, int angle2, int angle3) {
    return (angle1 > 0 && angle2 > 0 && angle3 > 0 &&
            angle1 + angle2 < 180);
}

// Function to check if triangle is right-angled
int isRightAngled(int angle1, int angle2, int angle3) {
    return (angle1 == 90 || angle2 == 90 || angle3 == 90);
}

int main() {
    int angle1, angle2, angle3;

    // Input
    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    // Calculation
    angle3 = 180 - (angle1 + angle2);
    printf("The third angle is: %d\n", angle3);

    // Check validity
    if (isValidTriangle(angle1, angle2, angle3)) {
        // Check type
        if (isRightAngled(angle1, angle2, angle3)) {
            printf("The triangle is a right-angled triangle.\n");
        } else {
            printf("The triangle is not a right-angled triangle.\n");
        }
    } else {
        printf("Invalid triangle angles.\n");
    }

    return 0;
}