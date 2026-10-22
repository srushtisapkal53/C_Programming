/////////////////////////////////////////////////////////////////
//
// Function Name : FindGreatest
// Input         : Integer, Integer, Integer
// Output        : string.
// Description   : Finds the greatest number among three integers
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input                                   Output
// -------------------------------------------------------------
// 10 50 30                              50 is Greatest
// 40 40 20                              40 is Greatest
// 15 15 15                              15 is Greatest
// -5 -2 -10                             -2 is Greatest
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////