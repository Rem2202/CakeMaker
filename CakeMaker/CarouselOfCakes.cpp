#include "CarouselOfCakes.h"
#include <algorithm>
#include <iostream>

int CarouselOfCakes::cheesecake = 10;
int CarouselOfCakes::tiramisu = 10;
int CarouselOfCakes::brownie = 10;
int CarouselOfCakes::kinder = 10;
int CarouselOfCakes::eclair = 10;

CarouselOfCakes::CarouselOfCakes(){}

void CarouselOfCakes::addCake(std::string name)
{
	std::string c = "cheesecake";
	if (std::equal(name.begin(), name.end(), c.begin())) cheesecake++;
	c.clear();
	c = "tiramisu";
	if (std::equal(name.begin(), name.end(), c.begin())) tiramisu++;
	c.clear();
	c = "brownie";
	if (std::equal(name.begin(), name.end(), c.begin())) brownie++;
	c.clear();
	c = "kinder";
	if (std::equal(name.begin(), name.end(), c.begin())) kinder++;
	c.clear();
	c = "eclair";
	if (std::equal(name.begin(), name.end(), c.begin())) eclair++;
}

void CarouselOfCakes::getCake(std::string name)
{
	std::string c = "cheesecake";
	if (std::equal(name.begin(), name.end(), c.begin()))
	{
		cheesecake--;
	}
	c.clear();
	c = "tiramisu";
	if (std::equal(name.begin(), name.end(), c.begin())) 
	{
		tiramisu--;
	}
	c.clear();
	c = "brownie";
	if (std::equal(name.begin(), name.end(), c.begin())) 
	{
		brownie--;
	}
	c.clear();
	c = "kinder";
	if (std::equal(name.begin(), name.end(), c.begin())) 
	{
		kinder--;
	}
	c.clear();
	c = "eclair";
	if (std::equal(name.begin(), name.end(), c.begin())) 
	{
		eclair--;
	}
}

int CarouselOfCakes::getCurrentCapacity(std::string name)
{
	std::string c = "cheesecake";
	if (std::equal(name.begin(), name.end(), c.begin())) return cheesecake;
	c.clear();
	c = "tiramisu";
	if (std::equal(name.begin(), name.end(), c.begin())) return tiramisu;
	c.clear();
	c = "brownie";
	if (std::equal(name.begin(), name.end(), c.begin())) return brownie;
	c.clear();
	c = "kinder";
	if (std::equal(name.begin(), name.end(), c.begin())) return kinder;
	c.clear();
	c = "eclair";
	if (std::equal(name.begin(), name.end(), c.begin())) return eclair;
	return 0;
}

void CarouselOfCakes::availableCakes()
{
	std::cout << "Available cakes: ";
	std::cout << "\nCheesecake - " << cheesecake << "\n";
	std::cout << "\nTiramisu - " << tiramisu << "\n";
	std::cout << "\nBrownie - " << brownie << "\n";
	std::cout << "\nKinder - " << kinder << "\n";
	std::cout << "\nEclair - " << eclair << "\n";
}