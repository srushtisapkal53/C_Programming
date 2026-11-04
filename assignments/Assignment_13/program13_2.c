/////////////////////////////////////////////////////////////////
//
//  Function Name : CountOdd
//  Description   : Accepts number from user and returns count of odd digits
//  Input         : int
//  Output        : int
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
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

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2395
//  Output : 3
//
//  Input  : 1018
//  Output : 2
//
//  Input  : -1018
//  Output : 2
//
//  Input  : 8462
//  Output : 0
//
/////////////////////////////////////////////////////////////////
