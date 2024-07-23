#include<stdio.h>
int main()
{
    int x;
    x=10;
    int sum;
    sum=0;
    loop:if(x<100)
    {
        if(x%2!=0)
            if(x/10==7)
            sum=sum+x;
        x++;
        goto loop;
    }


    printf("%d\n",sum);
}
