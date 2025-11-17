/*------------------------------------------------------
* Filename: calc_price.c
* Description: Program to receive details of a notebooks package and calculate its price.
* Author: Ori Harel
-------------------------------------------------------*/

#include <stdio.h>

#define DELIVERY_FEE 5.5
#define PRICE_PER_KG 11
#define PRICE_PER_SQCM 0.03
#define PRICE_PER_SQCM_PER_KG 0.01


int main() {
    /*Define and initialize the package details*/
    int length_in_mm = 0;
    int width_in_mm = 0;
    int weight_in_grams = 0;
    
    float package_size_in_sqcm = 0.0;
    float weight_in_kg = 0.0;
    float price = 0.0;

    /*Get package details from user*/
    printf("Enter length, width in mm: \n");
    scanf("%d , %d", &length_in_mm, &width_in_mm);
    printf("Enter weight in gr: \n");
    scanf("%d", &weight_in_grams);

    /*Calculate and print package size in squared centimeters*/
    package_size_in_sqcm = ((float) length_in_mm / 10) * ((float) width_in_mm / 10);
    printf("The size of the package is: %.2f cm^2\n", package_size_in_sqcm);

    /*Calculate and print package weight in kg*/
    weight_in_kg = (float) weight_in_grams / 1000;
    printf("The weight of the package is: %.3f kg\n", weight_in_kg);

    /*Calculate and print the price*/
    price += DELIVERY_FEE;
    price += weight_in_kg * PRICE_PER_KG;
    price += package_size_in_sqcm * PRICE_PER_SQCM;
    price += (package_size_in_sqcm / weight_in_kg) * PRICE_PER_SQCM_PER_KG;
    printf("The price is: %.2f NIS", price);


    return 0;
}