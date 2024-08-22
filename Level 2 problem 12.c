
//Write a program to get a number from user and print the sum of all digits.//
#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the number:");
    scanf("%d",&x);
    while(x!=0){
        sum=sum+x%10;
        x=x/10;
    }
    printf("%d",sum);
    return 0;
}
