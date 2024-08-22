//Write a program to print biggest 4-digit number which is divisible by 7 and 9.//
#include<stdio.h>
int main()
{
    int x;
    x=9999;
    while(x%7!=0 || x%9!=0){
        x--;
    }
    printf("%d",x);
    return 0;
}
