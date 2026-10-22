/////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Input         : Float, Integer
// Output        : string,float.
// Description   : Calculates employee bonus based on salary and experience
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if((fSalary <= 0.0f) || (iYears < 0))
    {
        printf("Invalid Input\n");
        return;
    }

    if(iYears > 10)
    {
        fBonus = (fSalary * 15.0f) / 100.0f;
    }
    else if(iYears >= 5)
    {
        fBonus = (fSalary * 10.0f) / 100.0f;
    }
    else
    {
        fBonus = (fSalary * 5.0f) / 100.0f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input                               Output
// salary  years
// -------------------------------------------------------------
// 30000     12                        Bonus = 4500.00
// 20000      7                        Bonus = 2000.00
// 10000      2                        Bonus = 500.00
// -5000      3                        Invalid Input
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////