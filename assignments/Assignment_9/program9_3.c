/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints number line from -N to +N
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

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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
//  Input  : 4
//  Output : -4	-3	-2	-1	0	1	2	3	4
//
/////////////////////////////////////////////////////////////////