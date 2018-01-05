//Jarred Budnovich
//N00876503
//1/22/15

#include <stdio.h>

int main(void)
{
/* Variable Declarations */
	int 	quantity;
	float   unitPrice;

/* Statement */
printf("Enter desired quantity and its unit price.\n");
scanf("%d %f", &quantity, &unitPrice);
printf("\nDesired Quantity is %d\n", quantity);
printf("Unit price is $%0.2f\n", unitPrice);
}
