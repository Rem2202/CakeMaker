#pragma once
#include "CarouselOfCakes.h"
#include "RecipeCake.h"
#include "CakeMaker.h"
class CommandTaker
{
public:
	CommandTaker();
	void takeCommand(RecipeCake* recipe);
	void takeCommand(RecipeCake* recipe, int numberOfCakes);
	void takeCommand(std::string nameOfCake);
	void getCakesFromCarousel();
	bool checkCarouselOfCakes();
	void refillCarousel(RecipeCake *recipe);
};