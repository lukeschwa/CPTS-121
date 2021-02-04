#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct card
{
	char suit;
	char *suits;
	int face;
	char *faces;

} Card;

int welcome_screen(void);
void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[], Card hand[5]);
Card get_new_card(char* number, char* suit);
Card replacement_card(int wDeck[][13], const char *wFace[], const char *wSuit[]);
int pair(Card hand[5]);
int two_pairs(Card hand[5]);
int three_of_a_kind(Card hand[5]);
int four_of_a_kind(Card hand[5]);
int flush(Card hand[5]);
int straight(Card hand[5]);
int best_combination(Card hand[5]);
void optimize_dealer_deck(int wDeck[][13], Card hand[5], const char *wFace[], const char *wSuit[]);
void reset(int wDeck[][13]);