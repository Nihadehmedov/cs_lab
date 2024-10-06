#include <stdio.h>

int main() {
    int runner1Coord, runner1Step, runner2Coord, runner2Step;
    printf("Enter the initial coordinates and steps for both runners:\n");
    scanf("%d %d %d %d", &runner1Coord, &runner1Step, &runner2Coord, &runner2Step);

     
    if ((runner1Step == runner2Step) || 
        (runner1Step > 0 && runner2Step > 0 && runner1Coord < runner2Coord && runner1Step <= runner2Step) || 
        (runner1Step < 0 && runner2Step < 0 && runner1Coord > runner2Coord && runner1Step >= runner2Step)) {
        printf("NEVER\n");
        return 0;
    }

     
    if ((runner1Step > 0 && runner2Step < 0 && runner1Coord < runner2Coord) || 
        (runner1Step < 0 && runner2Step > 0 && runner1Coord > runner2Coord)) {
        printf("NEVER\n");
        return 0;
    }

     
    for (int time = 1; time <= 1000000; time++) {  
        runner1Coord += runner1Step;  
        runner2Coord += runner2Step;  
        
        if (runner1Coord == runner2Coord) {  
            printf("%d %d\n", runner1Coord, time);
            return 0;
        }
    }

    printf("NEVER\n");  
    return 0;
}