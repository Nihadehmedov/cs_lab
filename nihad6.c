#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int heights[n];
    printf("Enter the heights of students: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    int shortest = heights[0], tallest = heights[0];
    int shortestPos = 1, tallestPos = 1;

    
    for(i = 1; i < n; i++) {
        if(heights[i] < shortest) {
            shortest = heights[i];
            shortestPos = i + 1;
        }
        if(heights[i] > tallest) {
            tallest = heights[i];
            tallestPos = i + 1;
        }
    }

    printf("Shortest: %d %d\n", shortest, shortestPos);
    printf("Tallest: %d %d\n", tallest, tallestPos);

    return 0;
}