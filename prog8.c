//Jarred Budnovich		4/21/15
//N00876503

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

//local declarations
int row;
int column;
int randomnum;
int n;
int m;
int r;
int c;
int x;
int search=0;
int i;
int j;
int count;

//Array
printf("Enter how many rows in the array:\n");
scanf("%d", &n);
printf("Enter how man columns in the array:\n");
scanf("%d", &m);
printf("The bug starts at array cell 0,0\n\n");

int grid[n][m];
for ( r = 0; r < n; r++)
    for ( c = 0; c < m; c++)
    {
        grid[r][c] = 0;
    }

srand(time(NULL));
//Main Loop
r=0;
c=0;
//Movement
count = 0;
while (1)
{
//Random Number Generator
randomnum = rand() % (7 + 1) + 1;
x = randomnum;

    if (x == 1)     //LEFT
       {
        c--;
        if(c < 0)
            ++c;
        else
            {grid[r][c]++;
            count++;}
        }
    if (x == 2)     //RIGHT
       {
        c++;
        if(c >= m)
            c--;
        else
            {grid[r][c]++;
            count++;}
       }
    if (x == 3)     //UP
       {
        r--;
        if(r < 0)
            r++;
        else
            {grid[r][c]++;
            count++;}
       }
    if (x == 4)     //DOWN
       {
        r++;
        if(r >= n)
            r--;
        else
            {grid[r][c]++;
            count++;}
       }
    if (x == 5)     //UP AND RIGHT
    {  {--r;
        c++;}
        if(r < 0)
           {r++;
            c--;}
        else if(c > m)
           {r++;
            c--;}
        else
            {grid[r][c]++;
            count++;}
       }
    if (x == 6)     //UP AND LEFT
    {
       {r--;
        c--;}
        if(r < 0)
            {r++;
            c++;}
        else if(c < 0)
           {r++;
            c++;}
        else
            {grid[r][c]++;
            count++;}
       }
    if (x == 7)     //DOWN AND RIGHT
    {
       {r++;
        c++;}
        if(r >= n)
           {--r;
            --c;}
        else if(c > m)
           {r--;
            c--;}
        else
            {grid[r][c]++;
            count++;}
        }
    if (x == 8)     //DOWN AND LEFT
    {
       {r++;
        c--;}
        if(r >= n)
           {r--;
            c++;}
        else if(c < 0)
           {r--;
            c++;}
        else
           {grid[r][c]++;
            count++;}
    }

//search
    for(row = 0; row < n; row++)
        {for(column = 0; column < m; column++)
            {if(grid[row][column] != 0)
                search++;
            }
        }
    if(search == n*m)
        break;
    else
        search = 0;
}
//print statements
for (row=0; row<n; row++)
    {for (column=0; column<m; column++)
        printf("%5d", grid[row][column]);
     printf("\n");
    }
    printf("\nCount: %d\n", count);

return 0;
}

