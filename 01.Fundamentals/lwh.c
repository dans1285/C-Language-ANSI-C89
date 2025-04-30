#include <stdio.h>
/*VOId 1n parentheses indicates that main nas no arguments.
*/
int main()
{

    int length = 45;
    double width = 20.80;
    float height = 20.005;

   float volume = height * width * width;
printf("The volume is :$%.3f\n", volume); 

/*
$d is a placeholder indicating where the value of height is to be filled in during
printing. Note the placement of \n just after $d, so that printf will advance to
the next line after printing the value of height.

%d works only for int variables; to print a float variable, we'd use %f instead.
By default, %f displays a number with six digits after the decimal point.
To force %f to display p digits after the decimal point, we can put .p between %
and f. For example, to print the line:

we OE NRE EE Pee?

we'd call printf as follows:
printf ("Profit: $%.2f\n", profit);

There’s no limit to the number of variables that can be printed by a single call
of printf. To display the values of both the height and length variables, we
could use the following call of printf:

printf ("Height: %d Length: %d\n", height, length);
*/




return 0;
}
