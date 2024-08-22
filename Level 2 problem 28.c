//Write a program to get two numbers from user and print the LCM of those numbers.//
#include<stdio.h>
int main(){
int i,num1,num2,lcm;
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
for(i=1;i<=num1*num2;i++){
    if(i%num1==0 && i%num2==0){
        lcm=i;
        break;
    }
}
printf("LCM of %d and %d is %d\n",num1,num2,lcm);
return 0;
}
