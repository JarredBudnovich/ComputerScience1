/* Author: Christian Zecher
Last modified: 9/15/16
This program calculates The subtotal price of 5 items of varying cost, then adds a tax on the subtotal cost for a total cost.
*/
#include<stdio.h>
//These are my defined constants
#define TV_PRICE 400.0
#define VCR_PRICE 220.0
#define REMOTE_CONTROLLER_PRICE 35.20
#define CD_PLAYER_PRICE 300.0
#define TAPE_RECORDER_PRICE 150.0
#define tax  1.0850
int main (void)
{
//Local declerations
int TV;
int  VCR;
int  REMOTE_CONTROLLER;
int  CD_PLAYER;
int  TAPE_RECORDER;
float price;
float  subtotal;
float  total_TV=0;
float  total_VCR=0;
float  total_REMOTE_CONTROLLER=0; 
float  total_CD_PLAYER=0;
float  total_TAPE_RECORDER=0;
float  tax_deduct;
float total;
//User prompts(statements)
printf("How many TVs were sold? ");
scanf("%d", &TV);
printf("How many VCRs were sold? ");
scanf("%d", &VCR);
printf("How many remote controllers were sold? ");
scanf("%d" , &REMOTE_CONTROLLER);
printf("How many Cd players were sold? ");
scanf("%d" , &CD_PLAYER);
printf("How many Tape Recorders were sold? ");
scanf("%d", &TAPE_RECORDER);
total_TV = TV * TV_PRICE;
total_VCR = VCR * VCR_PRICE;
total_REMOTE_CONTROLLER = REMOTE_CONTROLLER * REMOTE_CONTROLLER_PRICE;
total_CD_PLAYER = CD_PLAYER * CD_PLAYER_PRICE;
total_TAPE_RECORDER = TAPE_RECORDER * TAPE_RECORDER_PRICE;
subtotal = total_TV + total_VCR + total_REMOTE_CONTROLLER + total_CD_PLAYER + total_TAPE_RECORDER;
tax_deduct = subtotal*tax;
total = subtotal + tax_deduct;  
printf("\nQTY         Description            Unit Price           Total          Price");
printf("\n---         -----------            ----------           ----------\n");
printf("\n%d             TV                    400.00             %.2f               ", TV, total_TV);
printf("\n%d             VCR                    220.00            %.2f               ", VCR, total_VCR);
printf("\n%d       Remote Controller            35.20             %.2f               ", REMOTE_CONTROLLER, total_REMOTE_CONTROLLER);
printf("\n%d        CD Player                   300.00            %.2f               ", CD_PLAYER, total_CD_PLAYER);
printf("\n%d       Tape Recorder                150.00            %.21f               ", TAPE_RECORDER, total_TAPE_RECORDER);
printf("\n                                                       ------------");	
printf("\n                                          Subtotal           %.2f             ", subtotal);
printf("\n                                          Tax                %.2f             ", tax);
printf("\n                                          Total              %.2f             ", total);

return(0);
}
