#include <stdio.h>


/*This is a comment */
int main(void) {
    
    double height = 5.9;
    float base = 3.5;

    float volume = (base * height) / 2;


    printf("Area of 3-d Triangle  : %f\n",volume );

    /* %d is placeholder for value thats int to be printed
    float and double %f or %.2f to print 2 decimal places
    */
    return 0;
}