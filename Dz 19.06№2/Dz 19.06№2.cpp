#include <iostream>
#include <string>
#include <sstream> 
#include <cstdlib> 

using namespace std;


void a2 (int argc, char* argv[])// Ищет числовые аргументы, если они есть, то выводит их.
{
	int my;
	if (argc <= 1)
	{
		if (argv[0])
			cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			cout << "Usage: <program name> <number>" << '\n';

		exit(1);
	}

	for (int i = 0; i < argc; ++i)
	{
	
		std::stringstream convert(argv[i]); 
		if (!(convert >> my))
			my = 0;
		else cout << my<< " - числовой аргумент " << endl;;
	}

	if (my == 0)
	{
		cout << "Введен не числовой аргумент!!!\n";
	}
}



void a1 (int argc, char* argv[])//Показывает все аргументы 
{
	cout << "Всего " << argc << " аргумент(а):\n";

	
	for (int i = 0; i < argc; ++i)
		cout << i << " " << argv[i] << '\n';

}

void main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	int f;
	do {
		cout << "1 - 2 >>> "; cin >> f;
		switch (f)
		{
		case 1:
			a1(argc,argv);
			break;
		case 2:
			a2(argc,argv);
			break;
		}
	} while (f != 0);
}