/////////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description   : Accepts distance in kilometre and converts into meter
//  Input         : int
//  Output        : int 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d Kilometer is equal to %d Meter\n", iValue, iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 5 Kilometer is equal to 5000 Meter
//
/////////////////////////////////////////////////////////////////