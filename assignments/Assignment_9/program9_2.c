/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints numbers from 1 to that number
//  Input         : int
//  Output        : int(numbers in series)
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
        printf("%d\t", iCnt);
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
//  Output : 1	2	3	4	5
//
/////////////////////////////////////////////////////////////////