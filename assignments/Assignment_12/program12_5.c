/////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description   : Accepts number from user and counts frequency of digits less than 6
//  Input         : int
//  Output        : int
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2395
//  Output : 3
//
//  Input  : 1018
//  Output : 3
//
//  Input  : 9440
//  Output : 3
//
//  Input  : 96672
//  Output : 1
//
/////////////////////////////////////////////////////////////////
