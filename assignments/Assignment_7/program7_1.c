/////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Output        : pattern/special symbol
// Description   :prints a designated pattern according to the input number.
// Date          : 1/11/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    iNo = -iNo;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
    
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
// test case 1:
//Enter Number :
//3
//$       *       $       *       $       *
//
// test case 2:
//Enter Number :
//5
//$       *       $       *       $       *       $       *       $       *
//
//test case 3:
//Enter Number :
//-3
//$       *       $       *       $       *