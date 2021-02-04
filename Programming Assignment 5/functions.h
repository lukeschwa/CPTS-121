#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxScore 6
int print_game_rules(void);
int print_game_menu(void);
void roll_dice(int dice[], int size);
int hold_dice(int dice[], int size);
void print_dice(int *dice_ptr, int size);
int print_combinations_and_select(void);
void count_dice(int dice[], int dice_count[], int size);
int ones(int dice[], int size);
int twos(int dice[], int size);
int threes(int dice[], int size);
int fours(int dice[], int size);
int fives(int dice[], int size);
int sixes(int dice[], int size);
int toak(int dice[],int dice_count[], int size);
int foak(int dice[], int dice_count[], int size);
int full(int dice[],int dice_count[], int size);
int small(int dice[], int dice_count[], int size);
int large(int dice[], int dice_count[], int size);
int chance(int dice[], int dice_count[], int size);
int yahtzee(int dice[], int dice_count[], int size);