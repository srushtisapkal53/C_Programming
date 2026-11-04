/////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description   : Accepts number from user and displays multiplication of its factors
//  Input         : int
//  Output        : int
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 12
//  Output : 144  (1 * 2 * 3 * 4 * 6)
//
//  Input  : 13
//  Output : 1    (1)
//
//  Input  : 10
//  Output : 10   (1 * 2 * 5)
//
/////////////////////////////////////////////////////////////////
