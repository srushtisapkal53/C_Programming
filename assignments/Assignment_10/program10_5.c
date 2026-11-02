/////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : Accepts area in square feet and converts into square meter
//  Input         : int
//  Output        : double 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    dMeter = (double)iValue * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%d Square feet is equal to %f Square meter\n", iValue, dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 5 Square feet is equal to 0.464500 Square meter
//
//  Input  : 7
//  Output : 7 Square feet is equal to 0.650300 Square meter
//
/////////////////////////////////////////////////////////////////