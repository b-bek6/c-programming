/* Derived datatype: structure */


// in playing cards, there are 13 cards, namely Ace, 2, 3,,...J, Q, K,  of each suit, and there are 4 suits\
//  namely  (Hearts, Spades, Clubs, Diamonds)
//

// typedef is a keyword that lets you redefine a variable type.
// for eg: 
//
// typedef int integer
// integer x, y;                   int keyword has been redefined as integer
//
// Similarly, in this example, struct card has been redefined as cards 

#include<stdio.h>

typedef struct card {
	int card_value;
	char suit;
} cards;

int main(void)
{
	cards card1, card2, card3;	//int x, y, z;
	
	card1.card_value = 3;
	card1.suit = 's';

	card2.card_value = 2;
	card2.suit = 'h';

	card3.card_value = 1;
	card3.suit = 'd';


	printf("Card2: %d of %c\n", card2.card_value, card2.suit);
	printf("Card3: %d of %c\n", card3.card_value, card3.suit);
	printf("Card1: %d of %c\n", card1.card_value, card1.suit);

	return 0;
}

