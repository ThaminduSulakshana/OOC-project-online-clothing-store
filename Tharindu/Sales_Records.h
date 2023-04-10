#include "Order.h"
//Declaration of sales record class

class Sales_Records
{
	private:
		int transaction_ID;

		Order* orders[10];

	public:
		Sales_Records();
		Sales_Records(int transID);
		void itemtransaction();
};
