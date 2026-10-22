/////////////////////////////////////////////////////////////////
//
// Function Name : CheckTriangle
// Input         : Integer, Integer, Integer
// Output        : string.
// Description   : Checks whether three sides form a  triangle.
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0))
    {
        printf("Invalid Triangle\n");
        return;
    }

    if(((iSide1 + iSide2) > iSide3) && 
       ((iSide2 + iSide3) > iSide1) && 
       ((iSide1 + iSide3) > iSide2))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input          Output
// -------------------------------------------------------------
// 3 4 5          Valid Triangle
// 1 2 3          Invalid Triangle
// 0 4 5          Invalid Triangle
// 5 5 5          Valid Triangle
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////