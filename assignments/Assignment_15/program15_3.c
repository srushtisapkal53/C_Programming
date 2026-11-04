/////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description   : Accepts two numbers and checks whether numbers are equal or not
//  Input         : int, int
//  Output        : BOOL (TRUE / FALSE)
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 10 10
//  Output : Equal
//
//  Input  : 10 12
//  Output : Not Equal
//
//  Input  : 10 -10
//  Output : Not Equal
//
/////////////////////////////////////////////////////////////////