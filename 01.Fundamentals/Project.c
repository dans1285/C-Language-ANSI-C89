/*
PROGRAM: Dimensional Weight Calculator

Shipping costs for oversized but lightweight boxes are based on **dimensional weight**, calculated as:

    weight = (volume + 165) / 166;   // International shipments
    weight = (volume + 193) / 194;   // Domestic shipments

Volume is calculated as:

    volume = length * width * height;

Since integer division truncates decimals, adding 165 ensures proper rounding.
*/

#include <stdio.h>

int main() {
    int length, width, height, volume, weight;

    /* International shipment calculation*/
    length = 10;
    width = 9843;
    height = 2;
    volume = length * width * height;
    int international_weight = (volume + 165) / 166;  /* International shipments */
    weight = international_weight;

    printf("Dimensions For International : %d x %d x %d\n", length, width, height);
    printf("Volume for International: %d\n", volume);
    printf("Weight for International : %d\n", weight);

    /*Domestic shipment calculation*/
    int length2 = 10, width2 = 9843, height2 = 2;
    int volume2 = length2 * width2 * height2;
    int domestic_weight = (volume2 + 193) / 194;  /* Domestic shipments */


    printf("\n\n");
    printf("Dimensions For Domestic : %d x %d x %d\n", length2, width2, height2);
    printf("Volume for Domestic: %d\n", volume2);
    printf("Weight for Domestic : %d\n", domestic_weight);

    return 0;
}
