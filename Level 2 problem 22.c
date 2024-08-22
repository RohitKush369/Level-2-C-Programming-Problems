//write a program to get a number from user and print the total number of two digit odd number.//
#include<stdio.h>
int main()
{
    int x,number,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>=10){
        number=x%100;
    if(number%2!=0){
        count++;
    }
    x=x/10;
    }
    printf("%d",count);
    return 0;
}

