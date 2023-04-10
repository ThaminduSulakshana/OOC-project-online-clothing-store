#include "Payment.h"

//Declaration of Cash class
class Cash: public Payment
{
	private:
		float amount;

	public:
		Cash();
		Cash(float cash_amt);
};