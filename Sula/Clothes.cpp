#include "Clothes.h"
#include <cstring>
//Clothes class

Clothes:: Clothes(){}

Clothes:: Clothes(int citem_id, char cbrand_Name[], float cprice)
{
	item_ID = citem_id;
	strcpy(brand_Name, cbrand_Name);
	price = cprice;
}

void Clothes:: additems(){}
void Clothes:: removeitems(){}
void Clothes:: restockitems(){}