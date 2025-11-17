/*------------------------------------------------------
* Filename: calc_age.c
* Description: Program to receive a birth date and a current date, and calculate the age accordingly.
* Author: Ori Harel
-------------------------------------------------------*/

#include <stdio.h>

#define NUM_DAYS_IN_MONTH 30
#define NUM_DAYS_IN_YEAR 365

int main() {
    /*Define and initialize the variables for storing the current date*/
    int current_day = 0;
    int current_month = 0;
    int current_year = 0;
    /*Define and initialize the variables for storing the birth date*/
    int birth_day = 0;
    int birth_month = 0;
    int birth_year = 0;

    /*Define and initialize the variables for storing the age*/
    int age_in_days = 0;
    float age_in_months = 0.0;
    float age_in_years = 0.0;

    /*Receive current date*/
    printf("Enter current date:\n");
    scanf("%d / %d / %d", &current_day, &current_month, &current_year);
    /*Receive birth date*/
    printf("Enter birth date:\n");
    scanf("%d / %d / %d", &birth_day, &birth_month, &birth_year);

    /*Calculate and print the age values*/

    age_in_days = (NUM_DAYS_IN_YEAR * (current_year - birth_year)) + (NUM_DAYS_IN_MONTH * (current_month - birth_month)) + (current_day - birth_day);
    printf("Age in days: %d\n", age_in_days);

    age_in_months = (float) age_in_days / NUM_DAYS_IN_MONTH;
    printf("Age in months: %f\n", age_in_months);

    age_in_years = (float) age_in_days / NUM_DAYS_IN_YEAR;
    printf("Age in years: %f\n", age_in_years);


    return 0;

}