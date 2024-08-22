
//Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.//

#include<stdio.h>
    int main()
    {
    int x, y, i, sum = 0, count = 0;
    printf("Enter a number:");
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        if (x % i == 0){
            count++;
        }
        }
    if (count == 2){
        y = x;
        while (y > 0){
            sum = sum + y % 10;
            y = y / 10;
        }
        if (sum == 14){
            printf("The number is prime and the sum of digits is 14.\n");
        }
    else {
            printf("The number is prime but the sum of digits is not 14.\n");
        }
        }
     else{
        printf("The number is not prime but sum of digits is 14.\n");
    }
    return 0;
}
