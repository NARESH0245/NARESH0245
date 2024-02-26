#include <stdio.h>
    int main() {
    int units;
    float bill = 0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 20)
        bill = 80;  // Rs 80 for the first 20 units
    else if (units <= 120)
        bill = 80 + (units - 20) * 8;  
    else
        bill = 80 + 100 * 8 + (units - 120) * 10;  

    printf("Electricity Bill: Rs %f\n", bill);

    return 0;
}
