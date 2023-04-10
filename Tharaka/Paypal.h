#include "Payment.h"
//Declaration of Paypal class

class Paypal: public Payment
{
	private:
		int paypalID;
		char paypalName[50];

	public:
		Paypal();
		Paypal(int payID, char pname[]);
		void paypal_Authorize();
};