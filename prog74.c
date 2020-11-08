#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("\n Enter a character ");
    scanf("%s",&ch);
    if(isalpha(ch))
       printf("\n Alphabet ");
       else if(isdigit(ch))
        printf("\n Digit ");
       else if(isspace(ch))
        printf("\n Space ");
       else
        printf("\n Symbol ");
}
