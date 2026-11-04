/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : Accepts range from user and displays all even numbers in between
//  Input         : int, int
//  Output        : prints even numbers from given range.
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ", iCnt);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 23   35
//  Output : 24 26 28 30 32 34
//
//  Input  : 10   18
//  Output : 10 12 14 16 18
//
//  Input  : 10   10
//  Output : 10
//
//  Input  : -10  2
//  Output : -10 -8 -6 -4 -2 0 2
//
//  Input  : 90   18
//  Output : Invalid range
//
/////////////////////////////////////////////////////////////////
