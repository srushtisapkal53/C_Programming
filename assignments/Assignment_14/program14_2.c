/////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description   : Accepts number from user and displays its factors in decreasing order
//  Input         : int
//  Output        : Factors printed in decreasing order 
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 12
//  Output : 6 4 3 2 1
//
//  Input  : 13
//  Output : 1
//
//  Input  : 10
//  Output : 5 2 1
//
/////////////////////////////////////////////////////////////////
