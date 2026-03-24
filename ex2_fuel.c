/*Name: OKIDI EMMANUEL OPIRO */
/*Student Number: 25/U/BIE/01413/PE */
#include <stdio.h>
int main()
{
    float distance, fuel, efficiency;
    //input 
    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);
    printf("Enter fuel used (litres):");
    scanf("%f", &fuel);
    //Calculation 
    efficiency = distance / fuel;
    //Output
    printf("\n-----FUEL EFFICIENCY REPORT-----\n");
    printf("Distance: %.2f km\n", distance);
    printf("Fuel: %.2f litres\n", fuel);
    printf("\nFuel efficiency: %.2fkm/1\n", efficiency);
    return 0;
}
