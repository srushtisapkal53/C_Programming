/////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : Accepts radius and calculates area of circle
//  Input         : float
//  Output        : double 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14f;
    double dArea = 0.0;

    if(fRadius < 0.0f)
    {
        fRadius = -fRadius;
    }

    dArea = fPI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f\n", dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5.3
//  Output : Area of circle is 88.202600
//
/////////////////////////////////////////////////////////////////