//Jarred Budnovich		4/7/2015
//N00876503

#include<stdio.h>

int main(void)
{
//Local Declarations
    int size;
    int temp;
    int n;
    int i;
    int x;

//Statements
    printf("Enter the size of your array:");
    scanf ("%d", &size);
    printf("Enter your number values for the array:");
    int arrayA[size];

    for(i = 0; i < size; i++)
        scanf("%d", &arrayA[i]);

    n = size;
    i = 0;
     
    while((i != n) && ((n-1) != i))
    {
        temp          =   arrayA[i];
        arrayA[i]     =   arrayA[n-1];
        arrayA[n-1]   =   temp;

    i++;
    n--;
    }

    printf("\nYour array is now reversed. ");
    printf("The order of values is:\n");
    
    for( x = 0; x < size; x++)
	printf(" %d ", arrayA[x]);

    printf("\n");
return 0;
}

