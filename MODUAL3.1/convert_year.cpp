// WAP to convert years into days and days into years
#include <stdio.h>
main()
{
    int days,years,weeks;
    days = 1456; 
    years = days/365; 
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7)); 
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
}
