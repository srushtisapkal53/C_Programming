/////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Input         : Integer
// Output        : char
// Description   : Prints 'n' number of stars.(n=input) 
// Date          : 21/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}