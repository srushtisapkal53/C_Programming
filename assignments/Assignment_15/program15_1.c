/////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts full name from user and prints that name
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%[^\n]s", Name);

    printf("Your name is %s\n", Name);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : Srushti Sapkal
//  Output : Your name is Srushti Sapkal
//
/////////////////////////////////////////////////////////////////
