#include "CommandPanel.h"
#include <iostream>

#define true 1
#define false 0

CommandPanel::CommandPanel()
{
	commandTaker = new CommandTaker();
}

void CommandPanel::addCakes()
{
	menu.push_back(new RecipeCake("cheesecake", 5));
	menu.push_back(new RecipeCake("tiramisu", 5));
	menu.push_back(new RecipeCake("brownie", 5));
	menu.push_back(new RecipeCake("kinder", 5));
	menu.push_back(new RecipeCake("eclair", 5));
	menu.push_back(new RecipeCake("chocolate", 5));
	menu.push_back(new RecipeCake("lemon", 5));
	menu.push_back(new RecipeCake("vanilla", 5));
	menu.push_back(new RecipeCake("lava", 5));
	menu.push_back(new RecipeCake("coffee", 5));
	menu.push_back(new RecipeCake("caramel", 5));
	menu.push_back(new RecipeCake("banana", 5));
}

void CommandPanel::showProducts()
{
	std::list<RecipeCake*>::iterator i;
	for (i = menu.begin(); i != menu.end(); i++)
		std::cout << (*i)->getName() << ";\n";
}
void CommandPanel::selectProduct(std::string name)
{
	int k = 0;
	RecipeCake* recipe = new RecipeCake();
	std::list<RecipeCake*>::iterator i;
	for (i = menu.begin(); i != menu.end() && k==0; i++)
	{
		if ((*i)->getName() == name)
		{
			recipe = (*i);
			k = 1;
		}
	}
	commandTaker->takeCommand(recipe);
}
void CommandPanel::selectProduct(std::string name, int numberOfProducts)
{
	int k = 0;
	RecipeCake* recipe = new RecipeCake("", 5);
	std::list<RecipeCake*>::iterator i;
	for (i = menu.begin(); i != menu.end() && k == 0; i++)
	{
		if ((*i)->getName() == name)
		{
			recipe = (*i);
			k = 1;
		}
	}
	commandTaker->takeCommand(recipe, numberOfProducts);
}

void CommandPanel::showProductsInCarousel()
{
	commandTaker->getCakesFromCarousel();
}

bool CommandPanel::searchName(std::string name)
{
	int k = 0;
	std::list<RecipeCake*>::iterator i;
	for (i = menu.begin(); i != menu.end() && k == 0; i++)
	{
		if ((*i)->getName() == name) k = 1;
	}
	if (k == 0) return false;
	else return true;
}