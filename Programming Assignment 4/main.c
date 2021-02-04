/**********************************************************************************************
* Programmer: Luke Schauble
* Class: CptS 121,lab: 7
* Programming Assignment: 4
* Created: october 1st,2018
* Last Revised: october 3rd,2018
* Description: plays the game craps
*********************************************************************************************/
#include "functions.h"
int main() {
	int master_value = 0,main_menu_selection=0,game_menu_selection=0;
	int rolls = 0, points = 0, die1 = 0, die2 = 0, pointtf = 0, did_win_roll = 0, sum_die = 0;
	double account_balance=0.0,wager_value=0.0;
	do {
		//main menu
		while (master_value == 0) {
			printf("1.See game rules\n2.play game\n3.quit");
			scanf_s("%d", &main_menu_selection);
			if (main_menu_selection == 1) {
				master_value = 1;
				system("cls");
			}
			else if (main_menu_selection == 2) {
				master_value = 2;
				system("cls");
			}
			else if (main_menu_selection == 3) {
				master_value = -1;
			}		
		}
		//__________________________________________________________________________________________________________________________________________________________
		//game rules
		while (master_value == 1) {
			print_game_rules();
			system("pause");
			system("cls");
			master_value = 0;
		}
		//____________________________________________________________________________________________________________________________________________________________
		//PLAY GAME
		//game menu
		while (master_value == 2) {
			printf("select option, you must first set your account balance, then your wager amount before you can play\n\n\nCurrent Account Balance:$%.2lf \nCurrent Wager Amount: $%.2lf\n\n1.set wager amount\n2.roll die\n3.set/change account balance\n4.exit to main menu",account_balance,wager_value);
			
			scanf_s("%d",&game_menu_selection);

			if(game_menu_selection == 1){
				master_value = 3;
					system("cls");
			}
			else if (game_menu_selection == 2) {
				master_value = 4;
					system("cls");
			}
			else if (game_menu_selection == 3) {
				master_value = 5;
					system("cls");
			}
			else if (game_menu_selection == 4) {
				master_value = 0;
					system("cls");
			}
	
		}
	//______________________________________________________________________________________________________________________________________________________________________
	//set wager amount
		while (master_value == 3) {
			wager_value = 0.0;
			wager_value = get_wager_amount();
			system("pause");
			system("cls");
			master_value = 2;
			
		}
	//_____________________________________________________________________________________________________________________________________________________________________
	//inital game values
		while (master_value == 4) {
			srand((unsigned)time(NULL));
			rolls = 1;
		    points = 0;
			master_value = 6;

		}
	//____________________________________________________________________________________________________________________________________________________________________
	//play game
		while (master_value == 6) {
			if (account_balance > 0) {
				die1 = roll_die();
				die2 = roll_die();
				sum_die = calculate_sum_dice(die1, die2);
				if (rolls == 1) {
					pointtf = is_win_loss_or_point(sum_die);
					points = sum_die;
					rolls++;
				}
				else {
					pointtf = is_point_loss_or_neither(sum_die, points);
					rolls++;
				}
				account_balance = adjust_bank_balance(account_balance, wager_value, pointtf);
				
				if (pointtf == 1) {
					did_win_roll = 1;
					rolls = 1;
					points = 0;
					print_die_graphic(die1);
					print_die_graphic(die2);
					printf("die1:%d\ndie2:%d\nYou won the roll!\n");
					master_value = 2;
					system("pause");
					system("cls");
				}
				else if (pointtf == 0) {
					did_win_roll = 0;
					rolls = 1;
					points = 0;
					print_die_graphic(die1);
					print_die_graphic(die2);
					printf("You lost the Roll!\n");
					master_value = 2;
					system("pause");
					system("cls");
				}
				else if(pointtf == -1) {
					did_win_roll = -1;
					print_die_graphic(die1);
					print_die_graphic(die2);
					printf("Points: %d\n",points);
					system("pause");
					system("cls");
				}
				master_value == 2;
			}
			
			else {
				printf("You ran out of money! You lose!\n\n");
				master_value = 0;
			}
		}
	//___________________________________________________________________________________________________________________________________________________________________
	//set/change wager amount
		while (master_value == 5) {
			account_balance = 0.0;
			account_balance = get_bank_balance();
			system("pause");
			system("cls");
			master_value = 2;
			

		}
	//_____________________________________________________________________________________________________________________________________________________________________
	} while (master_value > -1);

	return 0;
}