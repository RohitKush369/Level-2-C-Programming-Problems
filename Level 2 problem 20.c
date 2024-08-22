
//Write a program print total number of single digit Prime numbers.//
  #include<stdio.h>
    int main()
{
    int x,i,count=0;
    for(i=2;i<10;i++){
    if(i==2||i==3||i==5||i==7){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

