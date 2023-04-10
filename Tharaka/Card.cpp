#include "Card.h"
#include <cstring>
//card class

Card::Card(){}
Card::Card(int card_no, char ctype[], char exdate[])
{
	card_Number = card_no;
	strcpy(card_type,ctype);
	strcpy(expdate, exdate);
}
 void Card:: card_authorize(){}