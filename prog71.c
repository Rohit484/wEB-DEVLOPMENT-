#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10],s2[15];
    printf("\n String 1");
    scanf("%s",&s1);
    printf("\n string 2");
    scanf("%s",&s2);
    strcat(s1,s2);
    printf("\n string 1 %s",s1);
    printf("\n string 2 %s",s2);

}
