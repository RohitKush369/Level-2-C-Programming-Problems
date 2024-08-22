
//Write a program to get number from user, print whether that number’s first two digits (ten’s digits and one’s digit) is prime.//
#include<stdio.h>

int main() {
    int x, ones_digit, tens_digit;
    printf("Enter a number: ");
    scanf("%d", &x);
    ones_digit = x % 10;
    tens_digit = (x / 10) % 10;
    if((ones_digit == 2 || ones_digit == 3 || ones_digit == 5 || ones_digit == 7) &&
       (tens_digit == 2 || tens_digit == 3 || tens_digit == 5 || tens_digit == 7)) {
        printf("Number's tens and ones digits are prime");
    } else {
        printf("Number's tens and ones digits are not prime");
    }

    return 0;
}
