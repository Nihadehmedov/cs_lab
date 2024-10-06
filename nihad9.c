#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        
        for (j = 0; j < n; j++) {
            printf("%d ", i + j * n);
        }
        printf("\n"); 
    }

    return 0;
}