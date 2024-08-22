//Write a program get number from user print whether that number is prime or not.//
#include<stdio.h>
int main()
{
    int i,x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
   for(i=1;i<=x;i++){
   if(x%i==0){
    count++;
   }
   }
   if(count==2){
    printf("Number is prime");
   }
   else{
    printf("Number is not prime");
   }
   return 0;
}

