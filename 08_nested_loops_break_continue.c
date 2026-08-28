#include <stdio.h>
int main() {
printf("==================================\n");
printf("School Seating & Floor Allocation\n");
printf("==================================\n");
int floor;
int desk;

//Checking Floors(1 to 3)
for (floor=1; floor<=3; floor++) {
    printf("====Checking Floor %d====\n",floor);
    
    //Floor 2 is Under Maintenance
    if(floor==2){
        printf("====Floor %d is under maintenance====\n", floor);
        continue;
    }
    //Desks per Floor Limit is 10
    for (desk=1;desk<=15;desk++) {
        if (desk>10){
            printf("====Maximum Capacity for the floor has reached====");
            break;
        }
        printf("  Allocated -> Floor %d, Desk %d\n", floor, desk);
        }

        printf("\n");
    }
    printf("====================\n");

    printf(" Allocation Complete \n");
    printf("====================\n");


    return 0;
}