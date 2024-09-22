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

     
    int product1 = digit1 * digit2 * digit3;  
    int product2 = digit1 * digit2;           
    int product3 = digit1 * digit3;           
    int product4 = digit2 * digit3;          
    int product5 = digit1;                    
    int product6 = digit2;                    
    int product7 = digit3;                   

     
    int maxProduct = product1;
    if (product2 > maxProduct) maxProduct = product2;
    if (product3 > maxProduct) maxProduct = product3;
    if (product4 > maxProduct) maxProduct = product4;
    if (product5 > maxProduct) maxProduct = product5;
    if (product6 > maxProduct) maxProduct = product6;
    if (product7 > maxProduct) maxProduct = product7;

    
    printf("The maximum product is: %d\n", maxProduct);

    return 0;
}