/////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description   : Accepts number from user and checks whether it contains 0 in it or not
//  Input         : int
//  Output        : BOOL (TRUE / FALSE)
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return TRUE;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2395
//  Output : There is no Zero
//
//  Input  : 1018
//  Output : It Contains Zero
//
//  Input  : 9000
//  Output : It Contains Zero
//
//  Input  : 10687
//  Output : It Contains Zero
//
/////////////////////////////////////////////////////////////////
