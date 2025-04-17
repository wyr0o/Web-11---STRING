#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string word= { "малина" };
	std::string guess = 0;	
	while (word != guess)
	{
		std::cout << "Угадайте слово: ";
		std::cin >> guess;
		if (word != guess)
		{
			std::cout << "Неправильно"<< std::endl;
		}
		else 
		{
			std::cout << "Правильно! Вы победили! Загаданное слово — "<< word << std::endl;
		}
	}
}