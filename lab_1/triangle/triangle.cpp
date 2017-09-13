// triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

bool ContainsLetters(string str)
{
	return (!str.find_first_not_of("0123456789,.") == string::npos);
}

int main(int argc, char *argv[])
{
	double sides[3], a;
	string args[3];
	/*if (argc != 4)
	{
		cout << "Укажите длины сторон в качестве параметров. Формат ввода: triangle.exe a b c" << endl;
		return 1;
	}
	*/
	string alpha = "123";
	
	size_t id = string::npos;
	a = stod(alpha, &id);
	try
	{
		for (int i = 0; i < argc; ++i)
		{
			size_t idx = 0;
			args[i] = argv[i+1];
			sides[i] = stod(args[i], &idx);
			if (idx < args[i].length());
			{
				throw(invalid_argument("Проверьте правильность ввода параметров. Все параметры должны быть числовыми значениями."));
			}
			
		}
	}
	catch(invalid_argument const & e)
	{
		cout << e.what() << endl;
		return 1;
	}
	catch (out_of_range const & e)
	{
		cout << "Переполнение аргумента :" << e.what() << endl;
		return 1;
	}
    return 0;
}


