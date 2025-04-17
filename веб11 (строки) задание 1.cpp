#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string name;
	std::string surname;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Введите фамилию: ";
	std::cin >> surname;
	std::string fullname = name + " " + surname;
	std::cout << "Здравствуйте, " << fullname<< "!";
}