#include "CakeMaker.h"
#include <chrono>
#include <iostream>
using namespace std;

CakeMaker::CakeMaker(){}

void CakeMaker::takeCommand(RecipeCake *recipe)
{
    cout << "\nThe " << recipe->getName();
    if(recipe->getName()=="cheesecake") cout << " will be ready in " << recipe->getTime() << " seconds.\n";
    else cout << " cake will be ready in " << recipe->getTime() << " seconds.\n";
    _sleep(5000);
    cout << "\nOrder/refilling ready.\n";
}