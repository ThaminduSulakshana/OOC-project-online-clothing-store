#include "Payment.h"

//Declaration of card class

class Card: public Payment
{
	private:
		int card_Number;
		char card_type[10];
		char expdate[5];

	public:
		Card();
		Card(int card_no, char ctype[], char exdate[]);
		void card_authorize();
};