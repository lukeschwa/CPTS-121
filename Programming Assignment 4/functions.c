/**********************************************************************************************
* 
+rogrammer: Luke Schauble
* Class: CptS 121,lab: 7
* Programming Assignment: 4
* Created: october 1st,2018
* Last Revised: october 3rd,2018
* Description: plays the game craps
*********************************************************************************************/
#include "functions.h"
/*************************************************************
* Function: print_game_rules
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: prints the rules of the game
* Input parameters: none
* Returns: none
*************************************************************/
void print_game_rules(void) {
	printf("A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots. After the dice have come to rest\n, the sum of the spots on the two upward faces is calculated. If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on \n the first throw (called 'craps'), the player loses (i.e. the 'house' wins). If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes\n the player's 'point.' To win, you must continue rolling the dice until you 'make your point.' The player loses by rolling a 7 before making the point. \n\n");
}

/*************************************************************
* Function: get_bank_balance
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: gets the account balance of the player
* Input parameters: none
* Returns: account_balance
*************************************************************/
double get_bank_balance(void) {
	double account_balance = 0.0;
	printf("Enter your account balance: ");
	scanf_s("%lf", &account_balance);
	return account_balance;
}

/*************************************************************
* Function: get_wager_amount
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: gets the wager amount 
* Input parameters: none
* Returns: wager_amount
*************************************************************/
double get_wager_amount(void) {
	double wager_amount = 0.0;
	printf("Enter a wager amount: ");
	scanf_s("%lf", &wager_amount);
	return wager_amount;
}

/*************************************************************
* Function: check_wager_amount
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: checks weather the wager amount is valid
* Input parameters: wager,balance
* Returns: valid
*************************************************************/
int check_wager_amount(double wager, double balance) {
	int valid = 0;
	if (balance >= wager) {
		valid = 1;
	}
	return valid;
}

/*************************************************************
* Function: roll_die
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: rolls the 2 die 
* Input parameters: none
* Returns: die_value
*************************************************************/
int roll_die(void) {
	int die_value = 0;
	die_value = rand() % 6 + 1;
	return die_value;
}
/*************************************************************
* Function: calculate_sum_dice
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: adds the two dice values together
* Input parameters: die1_value,die2_value
* Returns: sum
*************************************************************/
int calculate_sum_dice(int die1_value, int die2_value) {
	int sum = die1_value + die2_value;
	return sum;
}

/*************************************************************
* Function: is_win_loss_or_point
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: determains if the player won the roll,lost the roll, or gets points
* Input parameters: sum_dice
* Returns: point
*************************************************************/
int is_win_loss_or_point(int sum_dice) {
	int point = -1;
	if ((sum_dice == 7) || (sum_dice == 11)) {
			point = 1;
	}
	else if ((sum_dice > 3) && (sum_dice < 11)) {
		point = 0;
	}
	return point;
}

/*************************************************************
* Function: is_point_loss_or_neither
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: determains if the player "made the point"
* Input parameters: sum_dice,point_value
* Returns: point
*************************************************************/
int is_point_loss_or_neither(int sum_dice, int point_value) {
	int point = -1;
	if (sum_dice == point_value) {
		point = 1;
	}
	if (sum_dice == 7) {
		point = 0;
	}
	return point;
}
/*************************************************************
* Function: adjust_bank_balance
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: allows the player to change their bank balance
* Input parameters: bank_balance,wager_amount,add_or_subtract
* Returns: initial_balance
*************************************************************/
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract) {
	double initial_balance = bank_balance;
	if (add_or_subtract == 1){
		initial_balance = bank_balance + wager_amount;
	}
	else if (add_or_subtract == 0){
		initial_balance = bank_balance - wager_amount;
	}
	return initial_balance;
}
/*************************************************************
* Function: print_die_graphic
* Date Created: october 1st, 2018
* Date Last Modified: october 3rd,2018
* Description: prints a visual representation of the die value
* Input parameters:die
* Returns: die
*************************************************************/
int print_die_graphic(int die) {
	if (die == 1) {
		printf("**********\n");
		printf("*        *\n");
		printf("*   O    *\n");
		printf("*        *\n");
		printf("**********\n");
	}
	else if (die == 2) {
		printf("**********\n");
		printf("*      O *\n");
		printf("*        *\n");
		printf("*  O     *\n");
		printf("**********\n");
	}
	else if (die == 3) {
		printf("**********\n");
		printf("*      O *\n");
		printf("*    O   *\n");
		printf("* O      *\n");
		printf("**********\n");
	}
	else if (die == 4) {
		printf("**********\n");
		printf("* O   O  *\n");
		printf("*        *\n");
		printf("* O   O  *\n");
		printf("**********\n");
	}
	else if (die == 5) {
		printf("**********\n");
		printf("* O   O  *\n");
		printf("*   O    *\n");
		printf("* O   O  *\n");
		printf("**********\n");
	}
	else if (die == 6) {
		printf("**********\n");
		printf("* O O O  *\n");
		printf("*        *\n");
		printf("* O O O  *\n");
		printf("**********\n");
	}

	return die;
}

