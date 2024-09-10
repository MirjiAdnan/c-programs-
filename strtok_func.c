#include<stdio.h>
#include<string.h>
int main()
{
    char s[10]="Adnan Ahmed Mirji";
    char *word;
    word = strtok(s," ");
    word = strtok(NULL," ");
    printf("%s",word);
    return 0;
}
