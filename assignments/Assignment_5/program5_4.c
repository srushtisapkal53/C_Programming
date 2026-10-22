/////////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Input         : Integer
// Output        : STRING
// Description   : Checks divisibility by both 3 and 5, only 3, only 5, or neither
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by Both\n");
    }
    else if((iValue % 3) == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if((iValue % 5) == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input         Output
// -------------------------------------------------------------
// 15                     Divisible by Both
// 9                      Divisible by 3 Only
// 10                     Divisible by 5 Only
// 7                      Not Divisible by Either
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////