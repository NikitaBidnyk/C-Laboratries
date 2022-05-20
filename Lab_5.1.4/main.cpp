#include <iostream>
#include <string>

using namespace std;



class ShopItemOrder
{
private:

	string* arrName;

	string ItemName[5] = { "Chair","Table","Fence","Wardrobe","Armchair" };

	double UnitPrice[5] = { 25.15, 54.75, 120., 203.13, 356.32 };

	double ItemsOrd = 0.;

	int SizeofList = 0;

	bool isEnd = true;

	void shopList() {
		cout << "Welcome to the shop!\nLook on our assortment: " << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << "Items:\t " << ItemName[i] << "\tPrice:\t " << UnitPrice[i] << "\n";
		}
	}

	void printList() {
		cout << "Your list of orders:\n";
		for (int i = 0; i < SizeofList; i++)
		{
			cout << "Items:\t " << arrName[i] << "\n";
		}
		cout << "Total price:\t" << ItemsOrd << endl;
	}

	void addtoList(string name) {
		string* arr1 = new string[SizeofList];

		for (int i = 0; i < SizeofList; i++)
		{
			if (i == SizeofList - 1)
			{
				arr1[i] = name;
			}
			else
			{
				arr1[i] = arrName[i];
			}
		}
		delete[] arrName;
		arrName = new string[SizeofList];

		for (int i = 0; i < SizeofList; i++)
		{
			arrName[i] = arr1[i];
		}
		delete[] arr1;

	}

public:

	void console() {
		shopList();

		while (isEnd)
		{
			cout << "Choose what you want to buy!" << endl;
			string temp;
			cin >> temp;


			for (int i = 0; i < 5; i++)
			{
				if (ItemName[i] == temp)
				{
					for (int j = 0; j < 5; j++)
					{
						if (j == i)
						{
							++SizeofList;
							ItemsOrd += UnitPrice[j];
							addtoList(temp);
						}
					}
					break;
				}
			}


			printList();

			cout << "Do you want continue?:  ";
			string temp2;
			cin >> temp2;
			if (temp2 == "yes")
			{
				isEnd = true;
			}if (temp2 == "no")
			{
				isEnd = false;
			}if (temp2 != "yes" && temp2 != "no") {
				while (temp2 != "yes" && temp2 != "no")
				{
					cout << "Mistake!\n";
					cout << "Do you want continue?:  ";
					cin >> temp2;
				}
			}

		}




	}


};


int main()
{

	ShopItemOrder b;
	b.console();



	return 0;
}