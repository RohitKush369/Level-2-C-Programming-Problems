#include <stdio.h>
    int main()
{
    int x,sum = 0, digit;
    printf("Enter a number:");
    scanf("%d",&x);
    while (x != 0) 
    {
    digit = x % 10;
    sum =sum+ digit;
    x /= 10;
    }
    printf("%d\n", sum);
}
