/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Accepts number from user and displays its digits in reverse order
//  Input         : int
//  Output        : Digits printed on separate lines
//  Author        : Srushti Kumod Sapkal
//  Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 2395
//  Output : 5
//           9
//           3
//           2
//
//  Input  : 1018
//  Output : 8
//           1
//           0
//           1
//
//  Input  : -1018
//  Output : 8
//           1
//           0
//           1
//
//  Input  : 9000
//  Output : 0
//           0
//           0
//           9
//
/////////////////////////////////////////////////////////////////
