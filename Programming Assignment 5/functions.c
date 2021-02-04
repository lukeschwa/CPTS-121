#include "functions.h"
/*************************************************************
* Function: print_game_rules
* Date Created: october 20th, 2018
* Date Last Modified: october 20th, 2018
* Description: prints the rules
* Input parameters: none
* Returns: none
*************************************************************/
int print_game_rules(void) {
	printf("The scorecard used for Yahtzee is composed of two sections. A upper section and a lower section. A total of thirteen boxes or thirteen scoring combinations are divided amongst the sections. The upper section consists of boxes that are scored by summing the value of the dice matching the faces of the box. If a player rolls four 3's, then the score placed in the 3's box is the sum of the dice which is 12. Once a player has chosen to score a box, it may not be changed and the combination is no longer in play for future rounds. If the sum of the scores in the upper section is greater than or equal to 63, then 35 more points are added to the players overall score as a bonus.");
}
/*************************************************************
* Function: print_game_menu
* Date Created: october 20th, 2018
* Date Last Modified: october 20th, 2018
* Description: prints the menu
* Input parameters: none
* Returns: none
*************************************************************/
int print_game_menu(void) {
	printf("WELCOME TO YAHTZEE\n");
	printf("1.Print Game Rules\n2.Start Game\n3.Quit Game");
	/*************************************************************
	* Function: roll_dice
	* Date Created: october 20th, 2018
	* Date Last Modified: october 20th, 2018
	* Description: rolls 5 dice
	* Input parameters: dice[],size
	* Returns: none
	*************************************************************/
}
void roll_dice(int dice[], int size) {
	int index = 0, hold = 0;
	for (; index < size; ++index) {
		dice[index] = rand() % 6 + 1;
	}
}
/*************************************************************
* Function: print_dice
* Date Created: october 20th, 2018
* Date Last Modified: october 20th, 2018
* Description: prints 5 dice to screen
* Input parameters: *dice_ptr,size
* Returns: none
*************************************************************/
void print_dice(int *dice_ptr, int size) {
	int index = 0;
	for (; index < size; ++index) {
		printf("die %d: %d\n", index + 1, dice_ptr[index]);
	}
/*************************************************************
* Function: print_combinations_and_select
* Date Created: october 20th, 2018
* Date Last Modified: october 20th, 2018
* Description: prints combinations and lets user select the one they wish to use
* Input parameters: none
* Returns: none
	*************************************************************/
}
int print_combinations_and_select(void) {
	int select_combo = 0;
	int p1ones = 0, p2ones = 0, p1twos = 0, p2twos = 0, p1threes = 0, p2threes = 0, p1fours = 0, p2fours = 0, p1fives = 0, p2fives = 0, p1sixes = 0, p2sixes = 0, p1toak = 0, p2toak = 0;
	int p1foak = 0, p2foak = 0, p1full = 0, p2full = 0, p1small = 0, p2small = 0, p1large = 0, p2large = 0, p1chance = 0, p2chance = 0, p1yahtzee = 0, p2yahtzee = 0;
		printf("Score Card                        PLAYER 1        PLAYER 2\n");
		printf("1. Ones                             (%d)            (%d) \n", p1ones, p2ones);
		printf("2. Twos                             (%d)            (%d) \n");
		printf("3. Threes                           (%d)            (%d) \n");
		printf("4. Fours                            (%d)            (%d) \n");
		printf("5. Fives                            (%d)            (%d) \n");
		printf("6. Sixes                            (%d)            (%d) \n");
		printf("7. Three of a kind                  (%d)            (%d) \n");
		printf("8. Four of a kind                   (%d)            (%d) \n");
		printf("9. Full House                       (%d)            (%d) \n");
		printf("10. Small Straight                  (%d)            (%d) \n");
		printf("11.Large Straight                   (%d)            (%d) \n");
		printf("12.Chance                           (%d)            (%d) \n");
		printf("13. Yahtzee                         (%d)            (%d) \n\n");
		printf("please enter the combination you wish to use\n\n");
		scanf_s("%d", &select_combo);

		return select_combo;
}
/*************************************************************
* Function: count_dice
* Date Created: october 20th, 2018
* Date Last Modified: october 20th, 2018
* Description: counts how many times each die was rolled
* Input parameters: dice[],dice_count[],size
* Returns: none
*************************************************************/
void count_dice(int dice[], int dice_count[], int size) {
	int index = 0;

	for (; index < size; ++index)
	{
		dice_count[dice[index]] += 1;
	}
	

}
/*************************************************************
ALL OF THE FUNCTIONS BELOW THIS POINT DO THE SAME THING, THEY CALCULATE THE SCORE ACHIVED IN THE SELECTED CATAGORY
ALL OF THE FUNCTIONS BELOW THIS POINT DO THE SAME THING, THEY CALCULATE THE SCORE ACHIVED IN THE SELECTED CATAGORY
ALL OF THE FUNCTIONS BELOW THIS POINT DO THE SAME THING, THEY CALCULATE THE SCORE ACHIVED IN THE SELECTED CATAGORY
ALL OF THE FUNCTIONS BELOW THIS POINT DO THE SAME THING, THEY CALCULATE THE SCORE ACHIVED IN THE SELECTED CATAGORY
*************************************************************/
int ones(int dice[], int size) {
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if (dice[index] == 1)
		{
			score = score + 1;
		}
	}
	system("cls");
	return score;
	
}


int twos(int dice[], int size){
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if (dice[index] == 2)
		{
			score = score + 2;
		}
	}
	system("cls");
	return score;
}


int threes(int dice[], int size) {
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if (dice[index] == 3)
		{
			score = score + 3;
		}
	}
	system("cls");
	return score;
}


int fours(int dice[], int size) {
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if (dice[index] == 4)
		{
			score = score + 4;
		}
	}
	system("cls");
	return score;
}


int fives(int dice[], int size) {
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if (dice[index] == 5)
		{
			score = score + 5;
		}
	}
	system("cls");
	return score;
}


int sixes(int dice[], int size) {
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if (dice[index] == 6)
		{
			score = score + 6;
		}
	}
	system("cls");
	return score;
}


int toak(int dice[], int dice_count[], int size)
{
	int index = 0, score = 0;
	for (index = 0; index < size; ++index)
	{
		if ((dice_count[0] >= 3) || (dice_count[1] >= 3) || (dice_count[2] >= 3) || (dice_count[3] >= 3) || (dice_count[4] >= 3) || (dice_count[5] >= 3) || (dice_count[6] >= 3))
		{
			score = dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
		}
		else {
			score = 0;
		}
	}
	system("cls");
	return score;
}
	int foak(int dice[],int dice_count[], int size)
	{
		int index = 0, score = 0;
		for (index = 0; index < size; ++index)
		{
			if ((dice_count[0] >= 4)||(dice_count[1] >= 4)||(dice_count[2] >= 4)||(dice_count[3] >= 4)||(dice_count[4] >= 4)||(dice_count[5] >= 4)||(dice_count[6] >= 4))
			{
				score = dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
			}
			else {
				score = 0;
			}
		}
		system("cls");
		return score;
	}
	int full (int dice[], int dice_count[], int size)
	{
		int index = 0, score = 0;
		for (index = 0; index < size; ++index)
		{
			if ( ((dice_count[0] == 2) || (dice_count[1] == 2) || (dice_count[2] == 2) || (dice_count[3] == 2) || (dice_count[4] == 2) || (dice_count[5] == 2) || (dice_count[6] == 2)) && ((dice_count[0] == 3) || (dice_count[1] == 3) || (dice_count[2] == 3) || (dice_count[3] == 3) || (dice_count[4] == 3) || (dice_count[5] == 3) || (dice_count[6] == 3)))
			{
				score = 25;
			}
			else {
				score = 0;
			}
		}
		system("cls");
		return score;
	}
	int small(int dice[], int dice_count[], int size)
	{
		int index = 0, score = 0;
		for (index = 0; index < size; ++index)
		{
			if ((dice_count[1, 2, 3, 4] == 1) || (dice_count[2, 3, 4, 5] == 1) || (dice_count[3, 4, 5, 6] == 1))
			{
				score = 30;
			}
			else {
				score = 0;
			}
		}
		system("cls");
		return score;
	}
	int large(int dice[], int dice_count[], int size)
	{
		int index = 0, score = 0;
		for (index = 0; index < size; ++index)
		{
			if ((dice_count[1, 2, 3, 4, 5] == 1) || (dice_count[2, 3, 4, 5, 6] == 1))
			{
				score = 40;
			}
			else {
				score = 0;
			}
		}
		system("cls");
		return score;
	}
	int chance(int dice[], int dice_count[], int size)
	{
		int score = 0;
		score = dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
		system("cls");
		return score;
	}
	int yahtzee(int dice[], int dice_count[], int size)
	{
		int index = 0, score = 0;
		for (index = 0; index < size; ++index)
		{
			if ( (dice_count[1] == 5) || (dice_count[2] == 5) || (dice_count[3] == 5) || (dice_count[4] == 5) || (dice_count[5] == 5) || (dice_count[6] == 5))
			{
				score = 50;
			}
			else {
				score = 0;
			}
		}
		system("cls");
		return score;
	}
