/////////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Description   : Accepts number from user and returns multiplication of all digits
//  Input         : int
//  Output        : int
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2395
//  Output : 270
//
//  Input  : 1018
//  Output : 8
//
//  Input  : 9440
//  Output : 144
//
//  Input  : 922432
//  Output : 864
//
/////////////////////////////////////////////////////////////////
