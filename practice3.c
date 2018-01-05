#include<stdio.h>

int sum(int a, int b);

int main()

{
int i = 10;
int j = 2;
printf( "Enter a number\n");
scanf("%d", &j);
i = sum(i, j);
printf("\n sum= %d\n", i);

return 0;
}

int sum(int a, int b)
{
int i;
i= a + b + 6;
return i;
}
