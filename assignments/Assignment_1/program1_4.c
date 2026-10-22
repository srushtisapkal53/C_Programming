///////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Input           :   Integer
//  Output          :   boolean
//  Description     :   checks whether number is divisible by 5
//  Date            :   21/10/2026
//  Author          :   Srushti Kumod Sapkal
//
//////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    bool bRet=FALSE;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet=TRUE)
    {
        printf("Divisible by five.");
    }
    else{
        printf("Not divisible by five.");
    }

}
