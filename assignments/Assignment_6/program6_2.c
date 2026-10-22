/////////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Input         : Float, Integer
// Output        : string
// Description   : Determines admission eligibility based on marks and age
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f) || (iAge < 0))
    {
        printf("Invalid Input\n");
        return;
    }

    if((fMarks >= 60.0f) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input        Output
// -------------------------------------------------------------
// 75  18       Eligible for Admission
// 55  19       Not Eligible
// 80  16       Not Eligible
// -10 18       Invalid Input
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////