/////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Input         : Integer
// Output        : None
// Description   : Prints even factors of the given number
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
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

    DisplayFactor(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (iValue)    Output
// -------------------------------------------------------------
// 24                2   4   6   8   12
// 36                2   4   6   12  18
// 15                (No Output)
// -20               2   4   10
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////