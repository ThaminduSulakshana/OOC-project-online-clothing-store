#include "Customer.h"
#include <cstring>
//Customer class

Customer::Customer(){}
Customer::Customer(int cid, char cname[], char dob[], char addr[])
{
	customer_ID = cid;
	strcpy(customerName,cname);
	strcpy(dateofbirth,dob);
	strcpy(address,addr);
}

void Customer:: registration(){}
void Customer::search(){}