/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description   : Accepts range from user and displays all numbers in between
//  Input         : int, int
//  Output        : Numbers dispalyed.
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 23   35
//  Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//
//  Input  : 10   18
//  Output : 10 11 12 13 14 15 16 17 18
//
/////////////////////////////////////////////////////////////////
