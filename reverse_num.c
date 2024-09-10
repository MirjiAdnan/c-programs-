#include<stdio.h>

int main()
{
    int num=6765,arr[5]={1,2,5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    int res=reverse(num);
    printf("reversed num:%d\n",res);
    int max=maxi(arr,n);
    printf("max of array:%d\n",max);


}
 int reverse(int num)
 {
     int reversed=0;
     while(num!=0)
     {
         int rem=num%10;
         reversed=reversed*10+rem;
         num=num/10;

     }
     return reversed;
 }

 int maxi(int arr[],int n)
 {
     printf("%d",n);
     int max=arr[0];
     for(int i=1;i<n;i++)
     {
         if(max<arr[i])
         {
             max=arr[i];
         }
     }
     return max;
 }
