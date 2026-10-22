/////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Input         : Integer
// Output        : string
// Description   : Determines number is divisible by 5 or not.
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (iValue)         Output
// -------------------------------------------------------------
// 45                     Divisible by 5
// 23                     Not Divisible by 5
// 0                      Divisible by 5
// -25                    Divisible by 5
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////