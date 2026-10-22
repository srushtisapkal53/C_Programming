/////////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Input         : Integer
// Output        : string
// Description   : checks voter eligibility
// Date          : 22/10/2026
// Author        : Srushti Kumod Sapkal
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
//
// Test Table:
// -------------------------------------------------------------
// Input                  Output
// -------------------------------------------------------------
// 21                     Eligible for Voting
// 16                     Not Eligible for Voting
// -5                     Invalid Age
// 18                     Eligible for Voting
// -------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////