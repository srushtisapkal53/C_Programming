/////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : pattern/special symbol
// Description   :prints a designated pattern according to the input number.
// Date          : 1/11/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
    
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//test case 1:
//Enter Number :
//8
//1       2       3       4       5       6       7       8
///////////////////////////////////////////////////////////////////////////