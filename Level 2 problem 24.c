//write a program to get a number from user to print total number of two digit perfect square number.//
#include<stdio.h>
int main(){
int x,i,count=0,number;
printf("Enter a number:");
scanf("%d",&x);
for(i=10;i<=99;i++){
        number=x%100;
if(number==16||number==25||number==36||number==49||number==64||number==81){
    count++;
}
x=x/10;
}
printf("%d",count);
}
