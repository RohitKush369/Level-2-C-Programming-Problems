#include<stdio.h>
int main()
{
    int x,count;
    x,count=0;
    printf("Enter Number:");
    scanf("%d",&x);
    if(x==0)
    {
       count=1;
    }
    else{
        while(x!=0)
        {
            x/=10;
            count++;

        }
    }
    printf("%d\n",count);
}
