/////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Input         : integer
// Output        : float
// Description   : Calculates electricity bill 
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if(iUnits <= 100)
    {
        fBill = (float)(iUnits * 5);
    }
    else if(iUnits <= 200)
    {
        fBill = (float)((100 * 5) + ((iUnits - 100) * 7));
    }
    else
    {
        fBill = (float)((100 * 5) + (100 * 7) + ((iUnits - 200) * 10));
    }

    printf("Bill = %.2f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input         Output
// -------------------------------------------------------------
// 80           Bill = 400.00
// 150          Bill = 850.00
// 250          Bill = 1700.00
// -20          Invalid Input
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////