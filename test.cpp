#include <iostream>
#include <string>
#include "test.h"

void printGreeting(const std::string& name) 
{
	std::cout << "Hello, " << name << "." << std::endl;
}

void printGreeting() 
{
	std::cout << "Hello." << std::endl;
}

void printFarewell(const std::string& name)
{
	std::cout << "Goodbye, " << name << "." << std::endl;
}

void printFarewell()
{
	std::cout << "Goodbye." << std::endl;
}

void askQuestion(const std::string& question)
{
	std::cout << question << "? " << std::endl;
}