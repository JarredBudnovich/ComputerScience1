#include<stdio.h>

int sum(int a, int b);

int main()
{
int i= 14;
int j= 2;

i = sum(i, 2)/2 % j;
printf("sum= %d\n", i);

return 0;
}

int sum(int a, int b)

{
int i;
i= a-b;
return i;
}
