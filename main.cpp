#include <iostream>
#include <string>
#include "test.h"

// �������� ������� ���������
int main (int argc, const char* argv[]) 
{
	std::string name;
	std::cin >> name;
	printGreeting(name);
	printFarewell(name);
	printGreeting();
	printLoveWords(name);
	
	return 0;
}