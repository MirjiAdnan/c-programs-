#include<stdio.h>
#include<stdlib.h>

int compare(int *a,int *b)
{
    return *b-*a;
}

int main()
{   int i=0,n;
    char arr[]={2,5,3,7,3,8};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);

    qsort(arr,n,sizeof(int),compare);

    printf("sorted array:");
    while(i<n)
    {
        printf("%d",arr[i]);
        i++;
    }
}
