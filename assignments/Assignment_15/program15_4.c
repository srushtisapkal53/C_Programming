/////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : Accepts three numbers and prints their multiplication (ignoring 0)
//  Input         : int, int, int
//  Output        : int
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    int iZeroCount = 0;

    if(iNo1 == 0)
    {
        iZeroCount++;
    }
    else
    {
        iMult = iMult * iNo1;
    }

    if(iNo2 == 0)
    {
        iZeroCount++;
    }
    else
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 == 0)
    {
        iZeroCount++;
    }
    else
    {
        iMult = iMult * iNo3;
    }

    if(iZeroCount == 3)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5  4  7
//  Output : 140
//
//  Input  : 5  0  7
//  Output : 35
//
//  Input  : 5  0  0
//  Output : 5
//
//  Input  : 0  0  0
//  Output : 0
//
/////////////////////////////////////////////////////////////////