#include<stdio.h>
int main()
{
    int n=016;
    int a=1;
    int ans=0;
    while(n!=0)
    {
        ans=ans+(n%10)*a;
        n=n/10;
        a=a*8;
    }
    printf("\n %d",ans);
}
