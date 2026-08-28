#include <stdio.h>

int main() {
    // 1. Initial State & Configuration
    float balance = 5000.0f;
    const float deliveryFee = 0.0f; // placeholder for future fees
    float bonus = 50.0f;

    // 2. Account Transactions (Compound Assignment Operators)
    balance += 2500.0f; // Salary credit
    balance -= 1500.0f; // Rent payment
    bonus *= 2.0f;       // Cashback bonus doubled
    balance += bonus;   // Add bonus to balance

    // 3. ATM Cash Breakdown (Arithmetic & Modulo Operators)
    int withdrawAmount = 3700;
    
    int notes500 = withdrawAmount / 500;
    int remainingAmount = withdrawAmount % 500;
    
    int notes100 = remainingAmount / 100;
    remainingAmount %= 100;

    // 4. Final Balance Deduction
    balance -= (float)withdrawAmount;

    // 5. Output Summary
    printf("------BANK ACCOUNT & ATM SUMMARY------\n");
    
    printf("Total Balance Before Cashout : Rs. %.2f\n", balance + withdrawAmount);
    printf("Cash Withdrawal Requested     : Rs. %d\n\n", withdrawAmount);
    
    printf("--- Currency Denomination Split ---\n");
    printf("  [Rs. 500 Notes] : %d\n", notes500);
    printf("  [Rs. 100 Notes] : %d\n", notes100);
    printf("  [Unprocessed]   : Rs. %d\n\n", remainingAmount);
    
    printf("Remaining Bank Balance       : Rs. %.2f\n", balance);

    return 0;
}