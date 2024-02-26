#include<stdio.h>
void calculateFactorial() {
    int num, i;
    unsigned long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i=i+1) {
        factorial *= i;
    }
    printf("Factorial of %d is: %lu\n", num, factorial);
}

int main() {
    calculateFactorial();

    return 0;
}