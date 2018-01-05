#include<stdio.h>

int main()
{
int i=0;
int sum=10;
i= i+ sum++;
sum = sum + --i;

printf("sum = %d\n", sum);

return 0;
}
