#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>
#include "CommandPanel.h"
#include "Exception.h"
using namespace std;

int main()
{
	int opt, numberOfCakes;
	string opt2, name;
	CommandPanel* commandPanel = new CommandPanel();
	commandPanel->addCakes();

	do
	{
		cout << "1. Menu" << endl;
		cout << "2. Order cake" << endl;
		cout << "3. Show available cakes" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter your option: ";
		cin >> opt;
		switch (opt)
		{
		case 1:
			commandPanel->showProducts();
			break;
		case 2:
			cout << "A. Order one(1) cake" << endl;
			cout << "B. Order multiple cakes" << endl;
			cout << "Enter your option: ";
			cin >> opt2;
			if (opt2 == "A")
			{
				try
				{
					cout << "\nEnter your command: ";
					cin >> name;
					if (!commandPanel->searchName(name))
						throw Exception("The cake you have requested is not available.\n");
				}
				catch (Exception e)
				{
					do
					{
						cout << e.error << "\nEnter your command: ";
						cin >> name;
					} while (!commandPanel->searchName(name));
				}
				commandPanel->selectProduct(name);
			}
			else if (opt2 == "B")
			{
				try
				{
					cout << "\nEnter your command: ";
					cin >> name;
					if (!commandPanel->searchName(name))
						throw Exception("The cake you have requested is not available.\n");
				}
				catch (Exception e)
				{
					do
					{
						cout << e.error << "\nEnter your command: ";
						cin >> name;
					} while (!commandPanel->searchName(name));
				}
				cout << "Enter the number of cakes you want: ";
				cin >> numberOfCakes;
				commandPanel->selectProduct(name, numberOfCakes);
			}
			else
				cout << "Please enter a valid option" << endl;
			break;
		case 3:
			commandPanel->showProductsInCarousel();
			break;
		default: case 0: exit(0);
		}
	} while (opt);

	return 0;
}