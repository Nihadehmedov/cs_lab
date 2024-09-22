#include <stdio.h>

int main() {
    double width, length, height, radius;

     
    printf("Enter the width, length, and height of the box: ");
    scanf("%lf %lf %lf", &width, &length, &height);

    printf("Enter the radius of the basketball: ");
    scanf("%lf", &radius);

    
    double diameter = 2 * radius;

    
    if (diameter <= width && diameter <= length && diameter <= height) {
        printf("The basketball can fit in the box.\n");
    } else {
        printf("The basketball cannot fit in the box.\n");
    }

    return 0;
}