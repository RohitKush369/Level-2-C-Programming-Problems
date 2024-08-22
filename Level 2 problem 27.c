//Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.//
#include<stdio.h>
int main()
{
    int x,i,count=0,sum;
    for(i=1;i<100000;i++){
            sum=0;
        x=i;
        while(x>0){
            sum=sum+x%10;
            x=x/10;
        }
        if(sum==14){
        count++;
        }
    }
    printf("%d",count);
    return 0;


}
