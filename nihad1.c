#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int product = 1;

    
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1; 
    }

    
    for (i = 1; i <= n; i++) {
        int element = 2 * i + 1;
        sum += element;
        product *= element;
    }

    
    printf("Sum of the first %d elements: %d\n", n, sum);
    printf("Product of the first %d elements: %d\n", n, product);

    return 0;
}