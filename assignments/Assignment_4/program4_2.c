/////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Input         : Integer
// Output        : string
// Description   : checks whether number is even or odd.
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    
    if((iValue % 2) == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (iValue)         Output
// -------------------------------------------------------------
// 24                     Even Number
// 17                     Odd Number
// 0                      Even Number
// -6                     Even Number
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////