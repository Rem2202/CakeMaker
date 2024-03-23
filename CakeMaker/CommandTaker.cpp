#include "CommandTaker.h"
#include <iostream>

CommandTaker::CommandTaker(){}

void CommandTaker::refillCarousel(RecipeCake* recipe)
{
	CarouselOfCakes* carousel = new CarouselOfCakes();
	CakeMaker* cakeMaker = new CakeMaker();
	if (carousel->getCurrentCapacity(recipe->getName()) < 3)
	{
		std::cout << "Refilling.\n";
		while (carousel->getCurrentCapacity(recipe->getName()) < 10)
		{
			cakeMaker->takeCommand(recipe);
			carousel->addCake(recipe->getName());
		}
		std::cout << "Done refilling.\n";
	}
}

void CommandTaker::takeCommand(RecipeCake* recipe)
{
	CarouselOfCakes* carousel = new CarouselOfCakes();
	if (recipe->getName() == "cheesecake" || recipe->getName() == "tiramisu" || recipe->getName() == "brownie" || recipe->getName() == "kinder" || recipe->getName() == "eclair")
	{
		carousel->getCake(recipe->getName());
		std::cout << "\nYour command, " << recipe->getName() << " cake, is ready." << std::endl;
		refillCarousel(recipe);
	}
	else
	{
		std::cout << "\nYour command is being prepared.";
		CakeMaker* cakeMaker = new CakeMaker();
		cakeMaker->takeCommand(recipe);
		std::cout << "\nYour command, " << recipe->getName() << " cake, is ready." << std::endl;
	}
}

void CommandTaker::takeCommand(RecipeCake* recipe, int numberOfCakes)
{
	CarouselOfCakes* carousel = new CarouselOfCakes();
	CakeMaker* cakeMaker = new CakeMaker();
	int i, n = carousel->getCurrentCapacity(recipe->getName());
	if (recipe->getName() == "cheesecake" || recipe->getName() == "tiramisu" || recipe->getName() == "brownie" || recipe->getName() == "kinder" || recipe->getName() == "eclair")
	{
		if (n < numberOfCakes)
		{
			std::cout << "\nYour command is being prepared.";
			for (i = 0; i < n; i++)
			{
				carousel->getCake(recipe->getName());
			}
			for (i = n; i < numberOfCakes; i++)
			{
				cakeMaker->takeCommand(recipe);
			}
			std::cout << "\nYour command, " << recipe->getName() << " cake, is ready." << std::endl;
			refillCarousel(recipe);
		}
		else
		{
			for (i = 0; i < numberOfCakes; i++)
			{
				carousel->getCake(recipe->getName());
			}
			std::cout << "\nYour command, " << recipe->getName() << " cake, is ready." << std::endl;
			refillCarousel(recipe);
		}
	}
	else
	{
		for (i = 0; i < numberOfCakes; i++)
		{
			cakeMaker->takeCommand(recipe);
		}
		std::cout << "\nYour command, " << recipe->getName() << " cake, is ready." << std::endl;
	}
}

void CommandTaker::takeCommand(std::string nameOfCake)
{
	CarouselOfCakes* carousel = new CarouselOfCakes();
	CakeMaker* cakeMaker = new CakeMaker();
	RecipeCake* recipe = new RecipeCake(nameOfCake, 5);
	if (recipe->getName() == "cheesecake" || recipe->getName() == "tiramisu" || recipe->getName() == "brownie" || recipe->getName() == "kinder" || recipe->getName() == "eclair")
	{
		carousel->getCake(nameOfCake);
		std::cout << "\nYour command, " << nameOfCake << " cake, is ready." << std::endl;
		refillCarousel(recipe);
	}
	else
	{
		std::cout << "\nYour command is being prepared.";
		cakeMaker->takeCommand(recipe);
		std::cout << "\nYour command, " << nameOfCake << ", has been served." << std::endl;
	}
}

void CommandTaker::getCakesFromCarousel()
{
	CarouselOfCakes* carousel = new CarouselOfCakes();
	carousel->availableCakes();
}

bool CommandTaker::checkCarouselOfCakes()
{
	int k = 0;
	CarouselOfCakes* carousel = new CarouselOfCakes();
	if (carousel->getCurrentCapacity("cheesecake")) k++;
	if (carousel->getCurrentCapacity("tiramisu")) k++;
	if (carousel->getCurrentCapacity("brownie")) k++;
	if (carousel->getCurrentCapacity("kinder")) k++;
	if (carousel->getCurrentCapacity("eclair")) k++;
	if (k >= 3) return 1;
	else return 0;
}