//Write a program to get a number from user print the total number of digits in that number//
#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x==0){
        count=1;
    }
    else{
        while(x!=0){
            count++;
            x=x/10;
        }
    }
    printf("%d",count);
    return 0;
}
