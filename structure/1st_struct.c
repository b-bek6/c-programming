/* Derived datatype: structure */

#include<stdio.h>

// in playing cards, there are 13 cards namely ace, 1, 2, 3, .......... J, Q, k, of each suit, and there are 4 suits namely/
// (Hearts, Spades, clups, Diamonds)

struct card {
    int card_value;
    char suit;
} card;

/*
struct student{
    int roll_no;
    char section;
} student;

struct book{
    int ISBN;
    char name[30];
    char author[100];
    int pages;
    int vol;
    float price;
} book;
*/

int main(void)
{
    struct card card1, card2, card3;           // int x,y,z;
    card1.card_value = 3;
    card1.suit = 's';

    card2.card_value = 2;
    card2.suit = 'h';

    card3.card_value = 1;
    card3.suit = 'd';

    printf("Card1: %d of %c\n",card1.card_value, card1.suit);
    printf("Card2: %d of %c\n",card2.card_value, card2.suit);
    printf("Card3: %d of %c\n",card3.card_value, card3.suit);
    return 0;
}