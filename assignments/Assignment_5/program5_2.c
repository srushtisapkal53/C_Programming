/////////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Input         : Integer
// Output        : None
// Description   : checks if. a given year is a leap year
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if(((iYear % 400) == 0) || (((iYear % 4) == 0) && ((iYear % 100) != 0)))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input           Output
// -------------------------------------------------------------
// 2024            Leap Year
// 1900            Not a Leap Year
// 2000            Leap Year
// 0               Invalid Year
// -2020           Invalid Year
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////