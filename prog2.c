//Jarred Budnovich	1/29/15
//N00876503

// This program converts Fahrenheit to Celsius

#include<stdio.h>

int main()

{

/* Variable Declarations*/
	
	float Fahrenheit;
	float Celsius;

/* Statment*/

	printf("Enter the temperature in Fahrenheit: \n");
	scanf("%f", &Fahrenheit);

	Celsius = (100.0 / 180.0) * (Fahrenheit - 32);

	printf("Fahrenheit temperature is: 	%.1f\n", Fahrenheit);
	printf("Celsius temperature is: 	%.1f\n", Celsius);
	
	return 0;

} //main
