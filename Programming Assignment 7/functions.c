#include "functions.h"
int welcome_screen(void) {
	int welcome_select = 0;
	printf("Welcome to 5 card poker!\n1. Play game\n\n2. Exit\n");
	scanf_s("%d", &welcome_select);
	return welcome_select;

}

/* shuffle cards in deck */
void shuffle(int wDeck[][13])
{
	int row = 0;    /* row number */
	int column = 0; /*column number */
	int card = 0;   /* card counter */

					/* for each of the 52 cards, choose slot of deck randomly */
	for (card = 1; card <= 52; card++)
	{
		/* choose new random location until unoccupied slot found */
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (wDeck[row][column] != 0);

		/* place card number in chosen slot of deck */
		wDeck[row][column] = card;
	}
}

/* deal cards in deck */
void deal(int wDeck[][13], const char *wFace[], const char *wSuit[], Card hand[5])
{
	int row = 0;    /* row number   */
	int column = 0; /*column number */
	int card = 0;   /* card counter */
	int dealt = 0;  
					

	/* deal each of the 52 cards */
	for (card = 1; card <= 52; card++)
	{
		/* loop through rows of wDeck */
		for (row = 0; row <= 3; row++)
		{
			/* loop through columns of wDeck for current row */
			for (column = 0; column <= 12; column++ && wDeck[row][column] != -1)
			{
				/* if slot contains current card, display card */
				if (wDeck[row][column] == card && wDeck[row][column] !=-1)
				{
					wDeck[row][column] = -1;
					hand[dealt] = get_new_card(wFace[column], wSuit[row]);
					dealt += 1;
					if (dealt == 5) break;
				}
			}
			if (dealt == 5) break;
		}
		if (dealt == 5) break;
	}
}


Card get_new_card(char* number, char* suit) {

	Card card;
	card.faces = number;

	if (number == "Ace") card.face = 1;

	else if (number == "Deuce") card.face = 2;

	else if (number == "Three") card.face = 3;

	else if (number == "Four") card.face = 4;

	else if (number == "Five") card.face = 5;

	else if (number == "Six") card.face = 6;

	else if (number == "Seven") card.face = 7;

	else if (number == "Eight") card.face = 8;

	else if (number == "Nine") card.face = 9;

	else if (number == "Ten") card.face = 10;

	else if (number == "Jack") card.face = 11;

	else if (number == "Queen") card.face = 12;

	else if (number == "King") card.face = 13;

	card.suits = suit;
	card.suit = suit[0]; 
	return card;
}

Card replacement_card(int wDeck[][13], const char *wFace[], const char *wSuit[]) {
	int row = 0, column = 0, card = 0;

	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)
			{	
				if (wDeck[row][column] == card && wDeck[row][column] != -1)
				{
					wDeck[row][column] = -1;
					return get_new_card(wFace[column], wSuit[row]);
				}
			}
		}
	}

}
//
//
//          For all below, determains if the player and dealer has a certain combination of cards and returns a one if they do
//
//
int pair(Card hand[5]) {

	for (int i = 0; i < 5; i++)

		for (int j = 0; j < 5; j++)

			if (hand[i].face == hand[j].face && i != j)

				return 1;
	return 0;
}
int two_pairs(Card hand[5]) {
	int i = 0, j = 0, pairs = 0, check_same = -1;

	for (; i < 5; i++)

		for (; j < 5; j++)

			if (hand[i].face == hand[j].face && i != j && hand[i].face != check_same)
				pairs++;

	check_same = hand[i].face;

	if (pairs == 2)
		return 1;

	return 0;

}
int three_of_a_kind(Card hand[5]) {
	for (int i = 0; i < 5; i++)

		for (int j = 0; j < 5; j++)

			for (int k = 0; k < 5; k++)

				if (hand[k].face == hand[i].face && hand[k].face == hand[j].face && k != j && k != i)

					return 1;

	return 0;
	
}


int four_of_a_kind(Card hand[5]) {
	int i = 0, j = 0, k = 0, m = 0;

	for (; i < 5; i++)

		for (; j < 5; j++)

			for (; k < 5; k++)

				for (; m < 5; m++)
					if (hand[i].face == hand[j].face && hand[k].face && hand[m].face && i != j && i != k && k != j && i != m && j != m && k != m)

						return 1;


}
int flush(Card hand[5]) {
	for (int i = 0; i < 5; i++)

		for (int j = 0; j < 5; j++)

			if (hand[i].suit != hand[j].suit)

				return 0;

	return 1;

}

int straight(Card hand[5]) {
	int i = 0, j=0, min = hand[0].face,sequence = 0;

	for (; i < 5; i++) {

		if (hand[i].face < min) {
			min = hand[i].face;
		}
	}
	for (; j < 5; j++) {
		if (hand[j].face == min + i + 1) {
			++sequence;
		}
	}
	if (sequence != 5) {
		return 0;
	}
	else {
		return 1;
	}
}
int best_combination(Card hand[5]) {
	int score = 0;
	if (pair(hand) == 1) {
		score = 1;
		
	}
	if (two_pairs(hand) == 1) {
		score = 2;
		
	}
	if (three_of_a_kind(hand) == 1) {
		score = 3;
		
	}
	if (four_of_a_kind(hand) == 1) {
		score = 4;
		
	}
	if (flush(hand) == 1) {
		score = 5;
		
	}
	if (straight(hand) == 1) {
		score = 6;
	}


	return score;
	
}


void dealer_replace_one(int wDeck[][13], Card hand[5], const char *wFace[], const char *wSuit[]) {
	int pairs = 0, number = -1, swap = 0;
	int index[5] = { 1 };

	for (int i = 0; i < 5; i++)

		for (int j = 0; j < 5; j++)

			if (hand[i].face == hand[j].face && i != j && hand[i].face != number) {

				index[i] = -1;

				index[j] = -1;

			}



	for (int i = 0; i < 5; i++)

		if (index[i] != -1)

			swap = i;



	hand[swap] = replacement_card(wDeck, wFace, wSuit);
}


void dealer_replace_two(int wDeck[][13], Card hand[5], const char *wFace[], const char *wSuit[]) {

	int index[] = { 1 };

	for (int i = 0; i < 5; i++)

		for (int j = 0; j < 5; j++)

			for (int k = 0; k < 5; k++)

				if (hand[k].face == hand[i].face && hand[k].face == hand[j].face && k != j && k != i) {

					index[k] = -1;

					index[i] = -1;

					index[j] = -1;

				}



	for (int i = 0; i < 5; i++)

		if (index[i] == 1)

			hand[i] = replacement_card(wDeck, wFace, wSuit);

}

void dealer_replace_three(int wDeck[][13], Card hand[5], const char *wFace[], const char *wSuit[]) {

	int index[] = { 1 };

	for (int i = 0; i < 5; i++)

		for (int j = 0; j < 5; j++)

			if (hand[i].face == hand[j].face && i != j) {

				index[i] = -1;

				index[j] = -1;

			}



	for (int i = 0; i < 5; i++)

		if (index[i] == 1)

			hand[i] = replacement_card(wDeck, wFace, wSuit);

}
void optimize_dealer_deck(int wDeck[][13], Card hand[5], const char *wFace[], const char *wSuit[]) {
	int score = best_combination(wDeck);
	if (score == 1) {
		dealer_replace_three(wDeck, hand, wFace, wSuit); //a pair
	}
	else if (score == 2) {
		dealer_replace_one(wDeck, hand, wFace, wSuit);//two pairs
	}
	else if (score == 3) {
		dealer_replace_two(wDeck, hand, wFace, wSuit);//three of a kind
	}
}
void reset(int wDeck[][13]) {
	int row = 0, col = 0;

	for (row = 0 ; row <= 12; row++) {

		for (col = 0; col <= 3; row++) {

			wDeck[row][col] = 0;
		}
	}
}

