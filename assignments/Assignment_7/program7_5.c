/////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : Accepts N from user and prints its first 5 multiples
//  Input         : int
//  Output        : void(int)
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", (iNo * iCnt));
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////
//test case:
//Enter number : 50
//50      100     150     200     250
///////////////////////////////////////////////////////////////