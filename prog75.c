#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("\n Enter a character ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        if(isupper(ch))
            printf("\n Capital Alphabet ");
        else
            printf("\n small alphabet ");
    }
    else if (isdigit(ch))
        printf("\n digit ");
    else if(isspace(ch))
        printf("\n space ");
    else
        printf("\n your symbol ");

}
