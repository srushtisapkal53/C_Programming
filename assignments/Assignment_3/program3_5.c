/////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Input         : Character
// Output        : Boolean (BOOL)
// Description   : Checks whether a given character is vowel or not
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input (cValue)    Return Value (bRet)    Final Display
// -------------------------------------------------------------
// E                 TRUE (1)               It is Vowel
// d                 FALSE (0)              It is not Vowel
// a                 TRUE (1)               It is Vowel
// Z                 FALSE (0)              It is not Vowel
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////