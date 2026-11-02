/////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description   : Displays the multiplication table of a given number
//  Input         : int
//  Output        : int(table of given input)
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2
//  Output : 2	4	6	8	10	12	14	16	18	20
//
/////////////////////////////////////////////////////////////////