#include<stdio.h>

int reduce(int a,int b)
{   int digit[100];
    int count=0,i,c;
    c=b;
    while(c>0)
    {
        count++;
        c=c/10;
    }

    for(i=count-1;i>=0;i--)
    {
        digit[i]= b%10;
        b=b/10;
    }

    printf("digits array:");
    for(i=0;i<count;i++)
    {
        printf("%d",digit[i]);
    }
}
int main()
{
    int a=2,b=568;
    reduce(a,b);
}
