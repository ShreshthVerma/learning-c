#include <stdio.h>

int main() {
    printf("==========================================\n");
    printf("     STUDENT REPORT & LOOP DEMO SYSTEM    \n");
    printf("==========================================\n\n");

    // 1. While Loop: Countdown to Exam Starts
    printf("--- 1. While Loop (Exam Countdown) ---\n");
    int countdown = 3;
    while (countdown > 0) {
        printf("Exam starting in: %d...\n", countdown);
        countdown--;
    }
    printf("Exam Started!\n\n");

    // 2. Do-While Loop: Process at least once (Attendance Check)
    printf("--- 2. Do-While Loop (Daily Attendance Sync) ---\n");
    int syncAttempts = 0;
    do {
        printf("Attempt %d: Syncing student attendance record to server...\n", syncAttempts + 1);
        syncAttempts++;
    } while (syncAttempts < 1);
    printf("Attendance Sync Completed.\n\n");

    // 3. For Loop: Calculate Total & Average Marks of a Student
    printf("--- 3. For Loop (Score Calculation across 5 Subjects) ---\n");
    int totalMarks = 0;
    int subjectScores[5] = {85, 78, 92, 88, 74};

    for (int i = 0; i < 5; i++) {
        printf("Subject %d Score: %d\n", i + 1, subjectScores[i]);
        totalMarks += subjectScores[i];
    }
    float percentage = totalMarks / 5;
    printf("Total Marks: %d/500 | Percentage: %.2f%%\n\n", totalMarks, percentage);
    printf("\n==========================================\n");
    return 0;
}
    