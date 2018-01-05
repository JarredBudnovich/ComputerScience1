//Jarred Budnovich      3/12/15
//N00876503

#include<stdio.h>

//Function Declarations
double calculate (int n);

int main(void)
{
//Local Declarations
int   n = 0;
float num = 1.0;
float e = 0;

//Statements

while (num >= 0.0000001)

    {
    num = 1 / calculate(n);
    e = e + num;
    n++;
    }

    printf("Approximate value of e is %1.8f\n", e);

}

double calculate(int n)
{
  float a;
  float ans = 1.0;

  for (a = 1; a <= n; a++)
    {ans = ans * a;
    }
  return ans;
}


