#include "Order.h"
//Declaration of payment class

class Payment
{
	private:
		int payment_id;
		float amount;

		Order* myorder;

	public:
		Payment();
		Payment(int pid, float pamount);
		void verify_payment();
};