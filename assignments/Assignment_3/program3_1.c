/////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Input         : Integer
// Output        : None
// Description   : Prints specified number of even numbers
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    // Logic
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (iValue)    Output
// -------------------------------------------------------------
// 7                 2   4   6   8   10   12   14
// 1                 2
// 0                 (No Output)
// 
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////