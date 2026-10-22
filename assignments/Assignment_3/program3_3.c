/////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Input         : Integer
// Output        : None
// Description   : Prints even factors of a given number
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (iValue)    Output
// -------------------------------------------------------------
// 36                2   4   6   12  18
// 10                2
// 9                 (No Output)
// -36               2   4   6   12  18
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////