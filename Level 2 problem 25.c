//write a program to get a number from user and print the the total number or single digit prime number.//
#include<stdio.h>
int main()
{
    int x,i,number,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
        while(x>0){
                 number=x%10;
        if(number==2||number==3||number==5||number==7){
                count++;
        }
            x=x/10;
        }
        printf("%d",count);
     }
