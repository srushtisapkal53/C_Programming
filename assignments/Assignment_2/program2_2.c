/////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : None
// Description   : prints (n) number of stars.(n=input) using while loop and decrement.
// Date          : 21/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    // Write Updater
    while( iNo > 0 )
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}