#include <iostream>
#include <string.h>
using namespace std;

class Product {
	int id;	//Identifier of goods
	string explanation;	//product description
	string production;	//Producer
	int price;	//Price
};

class Book : public Product {
	int ISBN_number;	//ISBN Number
	string writer;	//Author
	string book_explan;	//About book titles
public:
};

class ConversationBook : public Book {
	string language;	//conversational language
public:
};

class CompactDisc :public Product {
	string album_title;	//album title
	string singer;	//Singer
public:
};

void main()
{
	Product product[100];
	int id = 0, selete;

	cout << "***** Operate the product management program *****" << endl;

	while (true)
	{
		cout << "Add Product (1), View All Products (2), Exit (3) ? ";
		cin >> selete;

		switch (selete)
		{
		case 1:
			product[id];
		case 2:
		case 3:
		default:
			cout << "Please re-enter." << endl;
			break;
		}
	}
}