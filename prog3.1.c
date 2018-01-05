//Jarred Budnovich	2/5/15
//N00876503


#include <stdio.h>

int main()

{

//Variable Declarations

int a;
int b;
int c;


//Statements

printf("Enter three integers in series to be reversed in series:\n");
scanf("%d %d %d", &a, &b, &c);
printf("\n%d %d %d\n", a, b, c);
printf("%d %d %d\n", c, b, a);


return 0;

}

