#include <iostream>
#include<cstring>
#include"Card.h"
#include "Cash.h"
#include "Clothes.h"
#include "Customer.h"
#include "Order.h"
#include "Payment.h"
#include "Paypal.h"
#include "Sales_Records.h"
#include "Staff.h"

using namespace std;

//implementing the main program
int main()
{
	Clothes cl_1(1001, "Licc", 750.00);
	Staff st_1(2001, "Kasun");
	Customer cust_1(5001, "Nethisha", "12/05/1998", "Ragama");
	Order ord_1(8001, 5);
	Sales_Records recoord_1(450);
	Payment pay_1(10001, 3750.00);
	Cash cas_1(12500.00);
	Card crd_1(123456789142, "Visa", "07/24");
	Paypal pypl_1(452178, "Suren Vithanage");
}