//Jarred Budnovich	2/10/15
//N00876503


#include <stdio.h>

// Function Declarations

void readData(int* a,  int* b, int* c);
void inOrder (int a,  int b, int c);
void inReverse(int a, int b, int c);


int main(void)

{

// Local Declarations
int a;
int b;
int c;

//Statements
readData(&a, &b, &c);
inOrder(a, b, c);
inReverse(a, b, c);
return 0;
}
// Main
 
//================Read Data===================

//Declaration
void readData(int* a, int* b, int* c)

{
// Statements
printf("Enter three integers in series to be reversed:\n");
scanf("%d%d%d", a, b, c);

return;
}                                                                    
//============================================



                       
//=================In Order===================

//Declaration
void inOrder(int a, int b, int c)
 
{
//Statements
printf("Your integers in order are: %d %d %d\n", a, b, c);
return;
}
//============================================




//===============In Reverse===================

//Declaration
void inReverse(int a, int b, int c)

{
//Statements
printf("\nYour integers in reverse are: %d %d %d\n\n", c, b, a);
return;
}
//============================================
