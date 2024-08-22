//write a program to get a number from from user and print the total number of  single digit perfect square numbers.//
#include<stdio.h>
int main()
{
    int x,count=0,digit;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        digit=x%10;
        if(digit==1||digit==4||digit==9){
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
    return 0;
}
