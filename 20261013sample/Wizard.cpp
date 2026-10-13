#include "Wizard.h"
#include <iostream>
using namespace std;

Wizard::Wizard(std::string name) : Character(name)
{}

void Wizard::Attack()
{
	cout << "–‚–@‚ÅUŒ‚‚·‚éI" << endl;
}