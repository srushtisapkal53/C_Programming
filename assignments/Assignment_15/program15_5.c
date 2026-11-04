/////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description   : Accepts total marks & obtained marks and calculates percentage
//  Input         : int, int
//  Output        : float
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fAns = 0.0f;

    if((iTotal == 0) || (iObtained > iTotal) || (iTotal < 0) || (iObtained < 0))
    {
        return 0.0f;
    }

    fAns = ((float)iObtained / (float)iTotal) * 100.0f;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.2f%%\n", fRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 1000  745
//  Output : 74.50%
//
/////////////////////////////////////////////////////////////////