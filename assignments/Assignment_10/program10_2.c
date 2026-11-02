/////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description   : Accepts width and height and calculates area of rectangle
//  Input         : float, float
//  Output        : double 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0.0f)
    {
        fWidth = -fWidth;
    }

    if(fHeight < 0.0f)
    {
        fHeight = -fHeight;
    }

    dArea = (double)fWidth * (double)fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %f\n", dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5.3    3.0
//  Output : Area of rectangle is 15.900000
//
/////////////////////////////////////////////////////////////////