#include<stdio.h>
int main()
{
    int a=117,b=65;
    int ans=gcd(a,b);
    printf("HCF:%d\n",ans);
    int lcm=a*b/ans;
    printf("LCM:%d",lcm);
    return 0;
}

int gcd(int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
