/////////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Input         : Character
// Output        : None
// Description   : Determines if character is uppercase, lowercase, digit, or special character
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Inpu        Output
// -------------------------------------------------------------
// A           Uppercase Alphabet
// m           Lowercase Alphabet
// 7           Digit
// @           Special Character
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////