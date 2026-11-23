#include <stdio.h>

int main() {
int x, i, sum = 0;
printf("Enter a number: ");
scanf("%d", &x);
for (i = 1; i < x; i++) {
    if (x % i == 0) {
        sum = sum + i;
    }
}
if (sum == x) {
printf("the number is perfect");
}
else {
    printf("the number is not perfect");
}   
}