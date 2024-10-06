#include <stdio.h>

int main(){
    int n;
    double sum = 0.0;

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; 
    }

    printf("Sum of the harmonic series up to %d is %.3f\n", n, sum);

    return 0;
}