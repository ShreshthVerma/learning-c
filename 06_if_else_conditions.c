#include <stdio.h>

int main() {
    int age = 20;
    int hasLearnerPass = 1;
    int testScore = 85;
    int isVIP = 0;

    printf("--- Driving License Verification System ---\n\n");

    // 1. Basic if & else: Entry Eligibility Check
    if (age >= 18) {
        printf("Status: Age verification passed (18+).\n");
    } else {
        printf("Status: Underage. Not eligible for license.\n");
    }

    // 2. Nested If: Document & Test Check
    if (age >= 18) {
        if (hasLearnerPass == 1) {
            printf("Learner Check: Verified. Candidate is allowed for driving test.\n");
        } else {
            printf("Learner Check: Failed. Learner permit required first.\n");
        }
    }

    // 3. else if Ladder: Performance & Grading Check
    printf("Test Score: %d -> Grade: ", testScore);
    if (testScore >= 90) {
        printf("Grade A (Excellent Driver)\n");
    } else if (testScore >= 75) {
        printf("Grade B (Standard Pass)\n");
    } else if (testScore >= 50) {
        printf("Grade C (Needs Improvement)\n");
    } else {
        printf("Failed the test.\n");
    }

    // 4. Short Hand If...Else (Ternary Operator: condition ? expr1 : expr2)
    // Fast processing fee check: VIP pays 0, others pay 500
    int processingFee = (isVIP == 1) ? 0 : 500;
    printf("\nProcessing Fee (Ternary Check): Rs. %d\n", processingFee);

    // Short Hand If in print
    (testScore >= 75) ? printf("Final Verdict: License Issued Successfully!\n") 
                      : printf("Final Verdict: License Application Rejected.\n");

    return 0;
}