//Write a program to get two numbers from user and print the HCF of those numbers.//
#include<stdio.h>
int main()
{
    int i,num1,num2,hcf;
    printf("Enter  the first number:");
    scanf("%d",&num1);
    printf("Enter the  second number");
    scanf("%d",&num2);
    for(i=1;i<=num1 && i<=num2;i++){
            if(num1%i==0&& num2%i==0){
        hcf=i;
            }
    }
    printf("HCF of %d and %d is %d\n",num1,num2,hcf);
    return 0;
    }
