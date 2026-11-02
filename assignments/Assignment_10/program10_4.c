/////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : Accepts temperature in Fahrenheit and converts into Celsius
//  Input         : float
//  Output        : double 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = ((double)(fTemp - 32.0f)) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %f\n", dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 10
//  Output : Temperature in Celsius is -12.222222
//
//  Input  : 34
//  Output : Temperature in Celsius is 1.111111
//
/////////////////////////////////////////////////////////////////