/////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Input         : Integer, Integer
// Output        : string
// Description   : States which of the two numbers is greater or equal
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    // Write your logic here
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (iValue1, iValue2)     Output
// -------------------------------------------------------------
// 10  20                       20 is Greater
// 50  30                       50 is Greater
// 15  15                       Both Numbers Are Equal
// -5  -10                      -5 is Greater
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////