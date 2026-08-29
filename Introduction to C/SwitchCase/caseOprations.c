#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("---------------------------------\n");
    printf("Following are your choices:(1-4)\n\n");
    printf("1. Is Armstrong?\n");
    printf("2. Is Prime?\n");
    printf("3. Is Positive?\n");
    printf("4. Exit\n");
    printf("---------------------------------\n");

    printf("Enter your choice:");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Armstrong number check
            int num;
            printf("Enter any number: ");
            scanf("%d", &num);

            int original = num;
            int count = 0, sum = 0;

            int temp = num;
            while (temp != 0) {
                count++;
                temp /= 10;
            }

            temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += (int)pow(digit, count);
                temp /= 10;
            }

            if (original == sum) {
                printf("%d is an Armstrong number!\n", original);
            } else {
                printf("%d is not an Armstrong number!\n", original);
            }
            break;
        }

        case 2: {
            // Prime number check
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num <= 1) {
                printf("%d is not prime!\n", num);
                break;
            }

            int flag = 1;
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1) {
                printf("%d is a prime number!\n", num);
            } else {
                printf("%d is not a prime number!\n", num);
            }
            break;
        }

        case 3: {
            // Positive/Negative check
            int num;
            printf("Enter your number: ");
            scanf("%d", &num);

            if (num > 0) {
                printf("Number is positive!\n");
            } else if (num == 0) {
                printf("Number is zero!\n");
            } else {
                printf("Number is negative!\n");
            }
            break;
        }

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
