
#include <stdio.h>

int main() {
    float n, max;
    int i, pos;

    printf("Enter number 1: ");
    scanf("%f", &n);

    max = n;
    pos = 1;

    for (i = 2; i <= 20; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &n);

        if (n > max) {
            max = n;
            pos = i;
        }
    }

    printf("The max is: %.2f\n", max);
    printf("The position is: %d\n", pos);

    return 0;
}
