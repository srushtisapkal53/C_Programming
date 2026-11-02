/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints that many * and # alternatively
//  Input         : int
//  Output        : Characters 
//  Author        : Srushti Kumod Sapkal
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Updater for negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : *	#	*	#	*	#	*	#	*	#
//
/////////////////////////////////////////////////////////////////