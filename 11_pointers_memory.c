#include <stdio.h>
int main() {
    printf("============================\n");
    printf("MEMORY & POINTERS INSPECTOR\n");
    printf("============================\n\n");

    // 1st Part: Basic Pointer & Dereferencing:
    printf("===Basic Pointer & Dereferencing===\n\n");

    int base_score=50;
    int *ptr= &base_score;
    printf("Variable Value:%d\n", base_score);
    printf("Pointer Target:%d\n", *ptr);
    printf("Address:%p\n", base_score);
    printf("Stored Address:%p\n", *ptr);

    //Modifying Value Using Pointer
    *ptr=95;
    printf("New Value of Base Score:%d\n\n", base_score);


    //2nd Part: Array Traversal via Pointer Arithmetic:
    printf("===Array Traversal via Pointer Arithmetic===\n\n");

    //Making an Array
    int scores[4]= {10,20,30,40};
    int *arr_pointer= scores;

    //Creating A Loop To Get Index, Address and Value of Element
    for(int i=0; i<=3; i++) {
    printf("Index:[%d]  |  Address:%p  |  Value:%d\n", i, (void*)(arr_pointer+i), *arr_pointer+i);
    }
    printf("\n");

    //3rd Part:Direct Pointer Navigation:
    printf("===Direct Pointer Navigation===\n\n");
    int *tracker=scores;
    printf("Initial value (*tracker): %d\n", *tracker);
    tracker++;
    printf("After tracker++ (*tracker): %d\n\n", *tracker);
    printf("=========================================");

    return 0;


}