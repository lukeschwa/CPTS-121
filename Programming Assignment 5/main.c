/**********************************************************************************************
* Programmer: Luke Schauble
* Class: CptS 121,lab: 7
* Programming Assignment: 5
* Created: october 20th,2018
* Last Revised: October 20th,2018
* Description: plays the game YAHTZEE
*********************************************************************************************/
#include "functions.h"
int main(void) {
	int master_value = 0, main_menu_selection = 0, dice[5] = { 0 }, rolls = 0, player = 0, dice_count[7] = { 0 }, count_turn = 0,counter = 0;
	int p1ones = -1, p2ones = -1, p1twos = -1, p2twos = -1, p1threes = -1, p2threes = -1, p1fours = -1, p2fours = -1, p1fives = -1, p2fives = -1, p1sixes = -1, p2sixes = -1, p1toak = -1, p2toak = -1;
	int p1foak = -1, p2foak = -1, p1full = -1, p2full = -1, p1small = -1, p2small = -1, p1large = -1, p2large = -1, p1chance = -1, p2chance = -1, p1yahtzee = -1, p2yahtzee = -1;
	int index = 0,size = 5;

	srand((unsigned int)time(NULL));

	do {
//main menu selection
		while (master_value == 0) {
			print_game_menu();
			scanf_s("%d", &main_menu_selection);

			if (main_menu_selection == 1) {
				master_value = 1;
				system("cls");
			}

			if (main_menu_selection == 2) {
				master_value = 2;
				system("cls");
			}

			if (main_menu_selection == 3) {
				printf("Thanks for playing, goodbye!\n");
				master_value = -3;
			}
		}
//___________________________________________________________________________________________________________________________________________
//print game rules
		while (master_value == 1) { //while master_value = 1, this will always happen
			print_game_rules();
			system("pause");
			master_value = 0;
			system("cls");
			}
//__________________________________________________________________________________________________________________________________________
//start new game
		while (master_value == -1) {
			dice_count[0] = 0;
			dice_count[1] = 0;
			dice_count[2] = 0;
			dice_count[3] = 0;
			dice_count[4] = 0;
			dice_count[5] = 0;
			dice_count[6] = 0;
			master_value = 2;
		}
		while (master_value == 2) { //while master_value = 2, this will always happen
			counter = 0;
			roll_dice(dice, 5);
			master_value = 3;
		}
//___________________________________________________________________________________________________________________________________________
		while (master_value == 3) {
			print_dice(dice, 5);
			count_dice(dice, dice_count, 5);
			int select_combo = 0, yes_or_no = 0;
			printf("Score Card                        PLAYER 1        PLAYER 2\n");
			printf("1. Ones                             (%d)            (%d) \n", p1ones, p2ones);
			printf("2. Twos                             (%d)            (%d) \n", p1twos, p2twos);
			printf("3. Threes                           (%d)            (%d) \n", p1threes, p2threes);
			printf("4. Fours                            (%d)            (%d) \n", p1fours, p2fours);
			printf("5. Fives                            (%d)            (%d) \n", p1fives, p2fives);
			printf("6. Sixes                            (%d)            (%d) \n", p1sixes, p2sixes);
			printf("7. Three of a kind                  (%d)            (%d) \n", p1toak, p2toak);
			printf("8. Four of a kind                   (%d)            (%d) \n", p1foak, p2foak);
			printf("9. Full House                       (%d)            (%d) \n", p1full, p2full);
			printf("10. Small Straight                  (%d)            (%d) \n", p1small, p2small);
			printf("11.Large Straight                   (%d)            (%d) \n", p1large, p2large);
			printf("12.Chance                           (%d)            (%d) \n", p1chance, p2chance);
			printf("13. Yahtzee                         (%d)            (%d) \n\n", p1yahtzee, p2yahtzee);
			if (counter == 3) {
				printf("please enter the combination you wish to use\n\n");
				scanf_s("%d", &select_combo);
				master_value = select_combo + 3;
			}
			else{
				printf("would you like to hold a dice?\nyou have used %d/3 holds for this turn\nyes = 1, no = 0\n",counter);
				scanf_s("%d", &yes_or_no);
				if (yes_or_no == 1) {
					counter++;
					master_value = -2;
				}
				else {
					printf("please enter the combination you wish to use\n\n");
					scanf_s("%d", &select_combo);
					master_value = select_combo + 3;
				}
		}
			
		}
//ones
		while (master_value == 4){
			if (rolls % 2 == 0) {
				p1ones = ones(dice, 5);
				rolls++;
			}
			else {
				p2ones = ones(dice, 5);
				rolls++;

			}
			master_value = -1;
			
		}
//_________________________________________________________________________________________________________________________________________________
//twos
		while (master_value == 5)
		{
			if (rolls % 2 == 0) {
				p1twos = twos(dice, 5);
				rolls++;
			}
			else {
				p2twos = twos(dice, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//threes
		while (master_value == 6)
		{
			if (rolls % 2 == 0) {
				p1threes = threes(dice, 5);
				rolls++;
			}
			else {
				p2threes = threes(dice, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//fours
		while (master_value == 7)
		{
			if (rolls % 2 == 0) {
				p1fours = fours(dice, 5);
				rolls++;
			}
			else {
				p2fours = fours(dice, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//fives
		while (master_value == 8)
		{
			if (rolls % 2 == 0) {
				p1fives = fives(dice, 5);
				rolls++;
			}
			else {
				p2fives = fives(dice, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//sixes
		while (master_value == 9)
		{
			if (rolls % 2 == 0) {
				p1sixes = sixes(dice, 5);
				rolls++;
			}
			else {
				p2sixes = sixes(dice, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Three of a kind
		while (master_value == 10)
		{
			if (rolls % 2 == 0) {
				p1toak = toak(dice,dice_count, 5);
				rolls++;
			}
			else {
				p2toak = toak(dice,dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Four of a kind
		while (master_value == 11)
		{
			if (rolls % 2 == 0) {
				p1foak = foak(dice, dice_count, 5);
				rolls++;
			}
			else {
				p2foak = foak(dice,dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Full House
		while (master_value == 12)
		{
			if (rolls % 2 == 0) {
				p1full = full(dice, dice_count, 5);
				rolls++;
			}
			else {
				p2full = full(dice,dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Small Straight
		while (master_value == 13)
		{
			if (rolls % 2 == 0) {
				p1small = small(dice, dice_count, 5);
				rolls++;
			}
			else {
				p2small = small(dice, dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Large Straight
		while (master_value == 14)
		{
			if (rolls % 2 == 0) {
				p1large = large(dice, dice_count, 5);
				rolls++;
			}
			else {
				p2large = large(dice, dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Chance
		while (master_value == 15)
		{
			if (rolls % 2 == 0) {
				p1chance = chance(dice, dice_count, 5);
				rolls++;
			}
			else {
				p2chance = chance(dice, dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//Yahtzee
		while (master_value == 16)
		{
			if (rolls % 2 == 0) {
				p1yahtzee = yahtzee(dice, dice_count, 5);
				rolls++;
			}
			else {
				p2yahtzee = yahtzee(dice, dice_count, 5);
				rolls++;
			}
			master_value = -1;
		}
//____________________________________________________________________________________________________________________________________________________
//hold dice
		while (master_value == -2) {
			int hold = 0;
			printf("Please Select 1 dice to hold: ");
			scanf("%d", &hold);
			dice[hold - 1] = rand() % 6 + 1;
			system("cls");
			master_value = 3;
	}

	} while (master_value > -3);
	return 0;
}