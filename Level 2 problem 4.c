#include<stdio.h>
int main()
{
    int x;
    x=6;
    int sum;
    sum=0;
    loop:if(x>0)
    {
    sum+=x;
    x--;
    goto loop;
    }
    printf("%d",sum);
}
