/*Name: OKIDI EMMANUEL OPIRO */
/*Student Number: 25/U/BIE/01413/PE */
#include <stdio.h>
int main()
{
    float units, cost_per_unit, total_bill;
    //input
    printf("Enter units consumed: ");
    scanf("%f", &units);
    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);
    //Calculation
    total_bill = units * cost_per_unit;
    //Output 
    printf("\n-----ELECTRICITY BILL-----\n");
    printf("Units: %.2f\n", units);
    printf("Cost Per unit: %.2fUGX\n", cost_per_unit);
    printf("\nTotal bill: %.2f UGX\n", total_bill);
    return 0;
}