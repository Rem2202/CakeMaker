#pragma once
#include "CommandTaker.h"
#include "RecipeCake.h"
#include <list>
#include <string>
class CommandPanel
{
private:
	std::list<RecipeCake*> menu;
	CommandTaker* commandTaker;
public:
	CommandPanel();
	void addCakes();
	void showProducts();
	void selectProduct(std::string name);
	void selectProduct(std::string name, int numberOfProducts);
	void showProductsInCarousel();
	bool searchName(std::string name);
};