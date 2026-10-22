/////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : char
// Description   : prints (n) number of stars.(n=input).
// Date          : 21/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while( iCnt < iNo )
    {
        printf(" * ");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}