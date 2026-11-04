/////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description   : Accepts one number from user and checks whether it is greater than 100 or not
//  Input         : int
//  Output        : BOOL (TRUE / FALSE)
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number : ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 101
//  Output : Greater
//
//  Input  : 39
//  Output : Smaller
//
/////////////////////////////////////////////////////////////////