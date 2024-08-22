
//Write a program to get a 4-digit number from user, print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.//
 #include<stdio.h>
 int main() {
    int x,tens_digit,hundreds_digit;
    printf("Enter a number: ");
    scanf("%d", &x);
    tens_digit = x/10 % 10;
    hundreds_digit = x/100 % 10;

    if ((tens_digit == 2 || tens_digit == 3 || tens_digit == 5 || tens_digit == 7) &&
        (hundreds_digit == 2 || hundreds_digit == 3 || hundreds_digit == 5 || hundreds_digit == 7)){

        printf("number's tens and hundreds digits are prime");
    }
     else {
        printf("number's tens and hundreds digits are not prime");
    }

    return 0;
}
