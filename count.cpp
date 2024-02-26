#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        num /= 10;
        count=count+1;
    }
    printf("Number of digits: %d\n", count);

    return 0;
}
