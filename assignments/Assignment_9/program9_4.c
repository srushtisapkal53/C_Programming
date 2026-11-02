/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints odd numbers up to that number
//  Input         : int
//  Output        : int (series of odd numbers)
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

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 8
//  Output : 1	3	5	7
//
/////////////////////////////////////////////////////////////////