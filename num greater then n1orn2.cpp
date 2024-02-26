#include <stdio.h>
int main() {
    int num, N1, N2;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter N1: ");
    scanf("%d", &N1);
    printf("Enter N2: ");
    scanf("%d", &N2);

    if (num > N1 && num < N2 && num % 7 == 0) {
        printf("%d satisfies the conditions.\n", num);
    } else {
        printf("%d does not satisfy the conditions.\n", num);
    }

    return 0;
}