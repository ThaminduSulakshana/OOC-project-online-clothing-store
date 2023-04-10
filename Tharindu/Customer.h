#include "Order.h"
//Declaration of customer class

class Customer
{
	private:
		int customer_ID;
		char customerName[200];
		char dateofbirth[10];
		char address[200];

		Order* orders[10];

	public:
		Customer();
		Customer(int cid, char cname[], char dob[], char addr[]);
		void registration();
		void search();
};