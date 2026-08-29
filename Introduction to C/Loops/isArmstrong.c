#include <stdio.h>
#include <math.h>

int main() {
    int num = 153;          // test number
    int original = num;     // keep a copy of the original number
    int count = 0;
    int sum = 0;

    // Step 1: calculate the number of digits
    int temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    // Step 2: calculate sum of digits raised to 'count'
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, count);
        temp /= 10;
    }

    // Step 3: compare with original number
    if (original == sum) {
        printf("%d is an Armstrong number!\n", original);
    } else {
        printf("%d is not an Armstrong number!\n", original);
    }

    return 0;
}
