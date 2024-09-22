#include <stdio.h>

int main() {
    double x, y;
printf("Enter the value of x: ");
    scanf("%lf", &x);
    if (x > 0) {
        y = x * x - 2 * x + 3;
    } else if (x == 0) {
        y = x - 5;
    } else { 
        y = x * x + 2 * x - 3;
    }

    printf("The value of y is: %lf\n", y);

    return 0;
}