#include <iostream>
#include "Product.h"
using namespace std;

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