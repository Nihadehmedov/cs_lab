#include <stdio.h>

int main() {
    int n, num, evenSum = 0, oddSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0)
            evenSum += num;  // Add to even sum
        else
            oddSum += num;   // Add to odd sum
    }

    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);

    return 0;
}