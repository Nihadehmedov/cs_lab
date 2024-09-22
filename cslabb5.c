 #include <stdio.h>
#include <stdlib.h>   

int main() {
    int number, digit1, digit2, digit3;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

     
    number = abs(number);

    
    digit1 = number / 100;           
    digit2 = (number / 10) % 10;     
    digit3 = number % 10;            

    
    int greatest = digit1;
    if (digit2 > greatest) {
        greatest = digit2;
    }
    if (digit3 > greatest) {
        greatest = digit3;
    }

     
    int smallest = digit1;
    if (digit2 < smallest) {
        smallest = digit2;
    }
    if (digit3 < smallest) {
        smallest = digit3;
    }

    
    printf("Greatest digit: %d\n", greatest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}