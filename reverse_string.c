#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="ABCD";
    printf("original:%s\n",str);
    reversestr(str);
    printf("reversed:%s",str);

}

void reversestr(char str[])
{
    int start=0;
    int end=strlen(str)-1;

     while(start<end)
     {
         char temp = str[start];
         str[start]=str[end];
         str[end]=temp;
         start++;
         end--;
     }
}
