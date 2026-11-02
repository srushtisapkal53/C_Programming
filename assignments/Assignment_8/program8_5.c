/////////////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Description   : Displays the multiplication table of a given number in reverse order
//  Input         : int
//  Output        : int(prints reverse table)
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2
//  Output : 20	18	16	14	12	10	8	6	4	2
//
/////////////////////////////////////////////////////////////////