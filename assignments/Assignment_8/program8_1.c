/////////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : Accepts a number and prints small (<50), 
//                  medium (50-100), or large (>100)
//  Input         : int
//  Output        : String ("Small" / "Medium" / "Large")
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////
//test case 1:
//Enter number : 23
//Small
//
//test case 2
//Enter number : 75
//Medium
//
//test case 3:
//Enter number : 110
//Large
///////////////////////////////////////////////////////////