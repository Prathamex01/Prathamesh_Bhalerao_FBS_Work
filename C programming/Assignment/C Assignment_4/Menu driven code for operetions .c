#include<stdio.h>

void main() {
    int no, rev, digit, original, sum;
    char choice;

    printf("Menu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime\n");
    printf("3. Check Palindrome\n");
    printf("4. Check Positive/Negative/Neutral\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");
    printf("Enter your choice (1-6): ");
    scanf(" %c", &choice); 

    printf("Enter a number: ");
    scanf("%d", &no);

    if (choice == '1') {
        if (no % 2 == 0)
            printf("%d is Even\n", no);
        else
            printf("%d is Odd\n", no);
    }

    else if (choice == '2') {
        int isPrime = 1;
        if (no <= 1)
            isPrime = 0;
        else {
            for (int i = 2; i <= no / 2; i++) {
                if (no % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1)
            printf("%d is Prime\n", no);
        else
            printf("%d is Not Prime\n", no);
    }

    else if (choice == '3') {
        original = no;
        rev = 0;
        while (no != 0) {
            digit = no % 10;
            rev = (rev * 10) + digit;
            no = no / 10;
        }

        if (rev == original)
            printf("%d is a Palindrome\n", original);
        else
            printf("%d is Not a Palindrome\n", original);
    }

    else if (choice == '4') {
        if (no > 0)
            printf("%d is Positive\n", no);
        else if (no < 0)
            printf("%d is Negative\n", no);
        else
            printf("%d is Neutral (Zero)\n", no);
    }

    else if (choice == '5') {
        original = no;
        rev = 0;
        while (no != 0) {
            digit = no % 10;
            rev = (rev * 10) + digit;
            no = no / 10;
        }
        printf("Reversed Number: %d\n", rev);
    }

    else if (choice == '6') {
        sum = 0;
        original = no;
        if (no < 0) {
            no = 0 - no;
        }

        while (no != 0) {
            digit = no % 10;
            sum = sum + digit;
            no = no / 10;
        }

        printf("Sum of digits of %d is %d\n", original, sum);
    }

    else {
        printf("Invalid choice! Please enter a number from 1 to 6.\n");
    }
}
