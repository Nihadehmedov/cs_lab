#include <stdio.h>

int main() {
    int t1, t2, t3, t4;

     
    printf("Enter the duration for tasks t1, t2, t3, and t4 (in hours or minutes): ");
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

     
    int maxTime = t1;

    if (t2 > maxTime) {
        maxTime = t2;
    }
    if (t3 > maxTime) {
        maxTime = t3;
    }
    if (t4 > maxTime) {
        maxTime = t4;
    }

     
    printf("The time required to complete all jobs is: %d\n", maxTime);

    return 0;
}