/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Accepts range and returns addition of all numbers in between (positive only)
//  Input         : int, int
//  Output        : int
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 23   30
//  Output : Addition is 212
//
//  Input  : 10   18
//  Output : Addition is 126
//
//  Input  : -10  2
//  Output : Invalid range
//
//  Input  : 90   18
//  Output : Invalid range
//
/////////////////////////////////////////////////////////////////
