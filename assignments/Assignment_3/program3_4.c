/////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Input         : Character
// Output        : character.
// Description   : Converts case of character 
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c\n", CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c\n", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (cValue)    Output
// -------------------------------------------------------------
// a                 A
// D                 d
// z                 Z
// M                 m
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////