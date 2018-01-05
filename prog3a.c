// Jarred Budnovich		2/24/15
// N00876503

#include<stdio.h>

int lowestNum(int a, int b, int c, int d);

int main()

{

// Declarations

int a;
int b;
int c;
int d;
int min;

printf(" Enter in four integers to find the lowest of the set: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
min = lowestNum( a, b, c, d );
printf("\n The lowest integer in the set is: %d \n", min);

return 0;
}
//main




lowestNum(int a, int b, int c ,int d)
{

int min;
int min1;
int min2;

	if (a > b)
{
		min1 = b;
}
	else 
{
		min1 = a;
}
	if (c > d)
{
		min2 = d;
}
	else
{
		min2 = c;
}
	if (min1 > min2)
{
		min = min2;
}
	else 
{
		min = min1;
}

return min;
}
// lowestNum function
