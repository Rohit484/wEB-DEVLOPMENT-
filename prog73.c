#include<stdio.h>
#include<string.h>
void main()
{
    char fname[15],mname[10],lname[10],full[40];
    printf("\n Enter first name ");
    scanf("%s",&fname);
    printf("\n Enter middle name ");
    scanf("%s",&mname);
    printf("\n Enter your last name ");
    scanf("%s",&lname);
    strcpy(full,fname);
    strcat(full," ");
    strcat(full,mname);
    strcat(full," ");
    strcat(full,lname);
    printf("\n Hello Mr.%s",full);

}
