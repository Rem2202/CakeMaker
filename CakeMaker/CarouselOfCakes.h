#pragma once
#include "Cake.h"
#include <vector>
class CarouselOfCakes : public Cake
{
protected:
	static int cheesecake;
	static int tiramisu;
	static int brownie;
	static int kinder;
	static int eclair;
public:
	CarouselOfCakes();
	void addCake(std::string name);
	void getCake(std::string name);
	int getCurrentCapacity(std::string name);
	void availableCakes();
};