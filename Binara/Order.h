#include "Clothes.h"
#include "Staff.h"
#include "Customer.h"
#include "Payment.h"

//Declaration of order class
class Order
{
	private:
		int order_ID;
		int quantity;

		Clothes* itms[10];
		Staff* stff[10];
		Customer* cus;
		Payment** payments[10];

	public:
		Order();
		Order(int oid, int oqty);
		void verifypayment();
};