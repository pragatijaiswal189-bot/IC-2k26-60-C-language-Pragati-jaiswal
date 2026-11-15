#include <stdio.h>
#include <math.h>

int main() {
    int num = 6;
    int originalNum, remainder, digits = 0;
    double result = 0.0;

    printf("Given Number: %d\n", num);

    originalNum = num;
    int temp = num;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, digits));
        temp /= 10;
    }

    if ((int)result == originalNum && originalNum >= 0) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
