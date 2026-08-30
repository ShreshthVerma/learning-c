#include <stdio.h>
int main() {
    printf("=============================\n");
    printf("Comprehensive Weather Tracker\n");
    printf("=============================\n");

    // ================================================
    // 1st Part. 1D Array: Weekly Temperature & Average
    // ================================================
    
    // 7-day recorded temperature dataset
    float week_temp[7]= {36.5, 37.2, 35.8, 36.8, 34.9, 38.4, 37.4};
    int length;
    int i;
    float sum=0;
    
    // Dynamically calculate array size using sizeof operator
    length= sizeof(week_temp)/sizeof(week_temp[0]);

    // Array traversal: Accumulate values into sum
    for (i=0; i<length; i++) {
        sum+=week_temp[i];
    }

    // Compute and display weekly average temperature
    float ave_temp;
    ave_temp=sum/length;
    printf("Average Temperature of the week is=%.2f degree Celsius\n", ave_temp);

    // =================================================
    // 2nd Part. 2D Array: Multi-City Temperature Matrix
    // =================================================

    // Multidimensional dataset: 2 Cities (Rows) x 3 Days (Columns)
    float city_temp[2][3]= {
        {34.3, 35.6, 33.8},// City 1 readings
        {37.4, 38.5, 36.2} // City 2 readings
    };
    // Outer loop: Iterate through rows (Cities)
    for (int city = 0; city < 2; city++) {
        printf("City%d--->",city+1);
        // Inner loop: Iterate through columns (Daily Readings)
        for (int day = 0; day < 3; day++) {
            printf("Day%d:%.2f Celsius:",day+1, city_temp[city][day]);
        }
        printf("\n");// Newline after each row completion
    }
    return 0;
}