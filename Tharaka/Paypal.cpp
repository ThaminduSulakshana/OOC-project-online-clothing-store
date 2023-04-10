#include "Paypal.h"
#include <cstring>
//Paypal class

 Paypal::Paypal(){}
 Paypal::Paypal(int payID, char pname[])
 {
	 paypalID = payID;
	 strcpy(paypalName, pname);
 }

 void Paypal:: paypal_Authorize(){}