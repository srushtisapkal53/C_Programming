/////////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description   : Accepts N from user and prints all odd numbers up to N
//  Input         : int
//  Output        : void
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
//test case 1:
//Enter number : 10
//1       3       5       7       9
/////////////////////////////////////////////////////////////////////////////////////////