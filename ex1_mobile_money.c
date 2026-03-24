/*Name: OKIDI EMMANUEL OPIRO */
/*Student Number: 25/U/BIE/01413/PE */
#include <stdio.h>
int main(void)
{
    float amount, percentage, fee, total;
    //Ask user input
    printf("Enter amount to send: ");
    scanf("%f", &amount);
    printf("Enter transaction fee (%%): ");
    scanf("%f", &percentage);
    //Calculate fee
    fee = (percentage / 100) * amount;
    //Calculate total deducted
    total = amount + fee;
    //Display results
    printf("\n-----TRANSACTION SUMMARY-----\n");
    printf("Amount        : %.2fUGX\n", amount);
    printf("\nTransaction fee: %.2fUGX\n", fee);
    printf("Total deducted: %.2fUGX\n", total);
    return 0;
}