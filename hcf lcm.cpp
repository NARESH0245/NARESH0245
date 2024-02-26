#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int a = num1;
    int b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}