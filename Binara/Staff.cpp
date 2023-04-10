#include "Staff.h"
#include <cstring>
//Staff Class

Staff:: Staff(){}
Staff::Staff(int sid, char sname[]) 
{
	staff_ID = sid;
	strcpy(staff_Name,sname);
}

void Staff::notify(){}