#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[25];
    printf("\n string 1");
    scanf("%s",&s1);
    printf("\n string 2 ");
    scanf("%s",&s2);
    strcpy(s2,s1);
    printf("\n string 1 %s",s1);
    printf("\n string 2 %s",s2);
}
