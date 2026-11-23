
#include <stdio.h>

int main() {
    int min_value, max_value, i;

    printf("Enter the minimum value: ");
    scanf("%d", &min_value);

    printf("Enter the maximum value: ");
    scanf("%d", &max_value);
    int a = 0;
    for (i = min_value; i <= max_value; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
            a = a + 1;
        }
       
        
    }
    printf("Number of multiples of 7: %d\n", a);
    if (a == 0) {
        printf("No multiples of 7 found in the given range.\n");
    }

    return 0;
}