#include <stdio.h>
int main() {
    //Defining Variables
    int quantity, has_membership ,is_eligible;
    float bill;

    /*Customer is only Eligible for discount if they bought three or 
    more items and their bill is greater than 500 or they have the
    Membership*/
    printf("--- Shopping Discount Eligibility (Logical Operators) ---\n\n");
    
    /*Case1 Customer bought more than 3 items and the bill is more
            than 500*/
    quantity=5;
    bill=720.45;
    has_membership=0;
    is_eligible=(quantity>=3 && bill>500)||has_membership;
    printf("Case 1 (Bulk purchase, No membership) -> Eligible: %d\n", is_eligible);

    // Case 2: Premium Member
    quantity=1;
    bill=103.45;
    has_membership=1;
    is_eligible=(quantity>=3 && bill>500)||has_membership;
     printf("Case 2 (Single Item, has membership) -> Eligible: %d\n", is_eligible);

     // Case 3: Regular Customer (Not Eligible)
     quantity=2;
     bill=232.43;
     has_membership=0;
     is_eligible=(quantity>=3 && bill>500)||has_membership;
     printf("Case 3 (Two items, No membership) -> Not Eligible: %d\n", is_eligible);


}