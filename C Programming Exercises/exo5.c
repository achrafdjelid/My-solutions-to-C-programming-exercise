// i use conditional statements to sum a number with while loop 
#include <stdio.h>
int main() {
    float n, sum = 0, product = 1;
    do {

        
        printf("Enter a number : ");
        scanf("%f", &n);
        sum = sum + n;
        product = product * n;
    } while (sum < 300 && product < 1000);

    printf("Sum: %.2f\n", sum);
    printf("Product: %.2f\n", product);
}