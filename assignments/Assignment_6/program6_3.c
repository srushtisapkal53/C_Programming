/////////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Input         : Float
// Output        : float/string
// Description   : Calculates total amount after applying  discount
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0.0f)
    {
        printf("Invalid Input\n");
        return;
    }

    if(fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000.0f)
    {
        fDiscount = (fAmount * 10.0f) / 100.0f;
    }
    else
    {
        fDiscount = (fAmount * 20.0f) / 100.0f;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (fAmount)        Output
// -------------------------------------------------------------
// 800                     800.00
// 2000                  1800.00
// 6000                   4800.00
// -500                   Invalid Input
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////