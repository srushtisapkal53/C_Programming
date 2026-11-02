/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints the first N multiples of that number
//  Input         : int
//  Output        : int(series of n muliples)
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 5	10	15	20	25
//
/////////////////////////////////////////////////////////////////