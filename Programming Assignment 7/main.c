/**********************************************************************************************
* Programmer: Luke Schauble
* Class: CptS 121,lab: 7
* Programming Assignment: 7
* Created: November 10th,2018
* Last Revised: November 16th,2018
* Description: plays the game 5 card poker
*********************************************************************************************/
// Authors: Deitel & Deitel - C How to Program

#include "functions.h"

int main(void)
{
	int master_value = 0;
	Card player_hand[5] = { 'a','b',3 };
	Card dealer_hand[5] = { 'a','b',3 };

	/* initialize suit array */
	const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	/* initialize face array */
	const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };

	/* initalize deck array */
	int deck[4][13] = { 0 };

	srand((unsigned)time(NULL)); /* seed random-number generator */
	do {

		while (master_value == -2) {
			system("cls");
			printf("Thanks for playing!");
		}

		while (master_value == 0) {
			int welcome_select = 0;
			printf("Welcome to 5 card poker!\n1. Play game\n\n2. Exit\n");
			scanf_s("%d", &welcome_select);
			
			if (welcome_select == 1) {
				system("cls");
				master_value = 1;
			}
			if (welcome_select == 2) {
				system("cls");
				master_value = -2;
			}
		

		}
		
		while (master_value == 1) {
			shuffle(deck);
			deal(deck, face, suit, player_hand);
			deal(deck, face, suit, dealer_hand);
			optimize_dealer_deck(dealer_hand, deck, face, suit); //replaces dealers cards with better cards

			for (int i = 0; i < 5; i++) {
				printf("Card: %s of %s\n", player_hand[i].faces, player_hand[i].suits);
			}
			master_value = 2;
		}
		while (master_value == 2) {
			int user_input_swap = 0;
			printf("How many cards would you like to replace(0-5)?\n");
			scanf_s("%d", &user_input_swap);
			for (int i = 0; i < user_input_swap; i++) {
				int swap;

				printf("Which card?\n");
				scanf("%d", &swap);
				player_hand[swap - 1] = replacement_card(deck, face, suit);

			}
			system("cls");
			for (int i = 0; i < 5; i++) {
				printf("Card %d: %s of %s\n\n", i + 1, player_hand[i].faces, player_hand[i].suits); // prints value and suit of card
			}
			master_value = 3;

		}
		while (master_value == 3) {
			printf("________________________________\n");
			printf("DEALER'S CARDS\n");
			for (int i = 0; i < 5; i++) {
				printf("Card %d: %s of %s\n", i + 1, dealer_hand[i].faces, dealer_hand[i].suits);
			}
			int player_score = best_combination(player_hand); //automatically determains the best combination the player and dealer has
			int dealer_score = best_combination(dealer_hand);
			
			if (player_score > dealer_score) {
				printf("\nCONGRATS, YOU WIN!");
			}
			else if (player_hand < dealer_hand) {
				printf("YOU LOSE, BETTER LUCK NEXT TIME!");
			}
			else {
				printf("ITS A DRAW!");
			}
			system("pause");
			system("cls");
			master_value = 0; //back to start
			
		}



		





		
	} while (master_value != -3);

	return 0;
}

