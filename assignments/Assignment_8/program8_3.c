/////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : Calculates and returns factorial of a given number
//  Input         : int
//  Output        : int 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : Factorial of number is 120
//
/////////////////////////////////////////////////////////////////