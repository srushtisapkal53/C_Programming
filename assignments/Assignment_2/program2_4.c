/////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer, Integer
// Output        : None
// Description   : Accepts two numbers and prints first number second number of times
// Date          : 21/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Updator for negative frequency
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    // Write Updater
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Output Table:
// ------------------------------------------------------------
//  Number             Frequency              Output             
// ------------------------------------------------------------
//  12                  5                   12 12 12 12 12     
//  -2                  3                    21 21 21           
//  -2                  0                    -2 -2 -2           
//  21                 -3                  -----------       
// ------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////