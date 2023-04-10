//declaring clothes class
class Clothes
{
	private:
		int item_ID;
		char brand_Name[20];
		float price;

	public:
		Clothes();
		Clothes(int citem_id, char cbrand_Name[], float cprice);
		void additems();
		void removeitems();
		void restockitems();
};