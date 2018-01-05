//Jarred Budnovich		3/5/15
//N00876503

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Global Functions
int run();

//Global Declarations
int randomnum;


int main()
{
//Local Declarations


//Statements
srand(time(NULL));
randomnum = (rand() % (19 + 1)) + 1;
printf("Can you guess what number I'm thinking of between 1 and 20?\n");
run();

return 0;

}

int run()
{
//Local Declarations
int count = 5;
int userguess;

//Statements

do{
    scanf("%d", &userguess);

    if (userguess==randomnum){
    printf("Congratulations! You guessed correctly!\n");
    break;
    }
    if (count>1){

    if (userguess < randomnum){
        printf("Guess a bit higher.\n");
    }

    if (userguess > randomnum){
        printf("Guess a bit lower.\n");
    }
    } 
	count--;
    }while (count>0);

    if (count==0){
        printf("Sorry, you ran out of guesses. The correct number is: %d\n", randomnum);
    }

    return 0;
    }

