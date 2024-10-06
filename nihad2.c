#include <stdio.h>

int main() {
    int a, b, k, sum = 0;


    printf("Enter the values of a, b, and k: ");
    scanf("%d %d %d", &a, &b, &k);

    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    
    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum += i; 
        }
    }

    
    printf("The sum of elements divisible by %d in the range [%d, %d] is: %d\n", k, a, b, sum);

    return 0;
}