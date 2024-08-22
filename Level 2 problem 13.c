//Write a program to get a number from user and print the reverse of that number.//
#include<stdio.h>
int main()
{
    int x,reverse=0,remainder;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x!=0){
        remainder=x%10;
        reverse=reverse*10+remainder;
        x/=10;
    }
    printf("%d",reverse);
    return 0;
}
