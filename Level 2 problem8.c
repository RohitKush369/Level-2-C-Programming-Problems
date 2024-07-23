#include<stdio.h>
int main()
{
    int x;
    x=10;
    int sum;
    loop:if(x<100)
    sum=x%10+x/10;
    if(x%2==0)
    {
    if(sum==6){
    printf("%d\n",x);
    }
    }
   x++;
   goto loop;
}
