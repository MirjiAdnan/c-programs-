#include<stdio.h>
int main()
{
    int n=200,flag=0,i,z=2,target=20,count=0;

    while(z<=n)
    {
        flag=0;
        for(i=2;i<=z/2;i++)
    {
        if(z%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        count++;
        if(target==count)
    {
        printf("%dth prime number is:%d\n",target,z);
    }
    }
    z++;
    }
        printf(" number of prime numbers between %d and %d:%d\n",1,n,count);
}
