/* Computes the dimensional weight of a
box from input provided by the user */

/*Program has problem if user puts non numeric input section 3.2 explains this */

#include <stdio.h>

int main(void)
{

    int length, width, height, volume, weight;

    printf("Enter the length of the box : \n");
    scanf("%d",&length);
    printf("Enter the width of the box : \n ");
    scanf("%d",&width);
    
    printf("Enter the height of the box : \n");
    scanf("%d",&height);

    volume = length * width * height ;
    weight = (volume + 165) / 166;
    


    printf("Volume of the box(cubic inches) is : %d\n", volume);
    printf("Dimensional weight of the box (pounds) : %d\n", weight);


return 0;
}
