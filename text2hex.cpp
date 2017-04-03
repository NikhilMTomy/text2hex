// Convert ASCII to HEX equivalent
#include <iostream>
#include "text2hex.h"

void usage(char* exe_name)
{
	std::cout << "Usage : " << exe_name << " output_format [input_value]\n\n";
	std::cout << "output_format\n";
	std::cout << "\tt : human readable text\n";
	std::cout << "\th : hex code\n";
	std::cout << "input_value : the input text or hex";
}

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		std::cout << "Insufficient number of arguments.\n";
		usage(argv[0]);
	}
	else if(argc < 4)
	{
		char txt[1000];
		if(*argv[1] == 'h')
		{
			std::cout << "Text to HEX conversion\n";
			if(argc == 3)
			{
				std::cout << "HEX equivalent : " << text2hex(argv[2]);
			}
			else
			{
				std::cout << "Enter string : ";
				std::cin.get(txt, 90, '\n');
				std::cout << "HEX equivalent : " << text2hex(txt);
			}
		}
		else if(*argv[1] == 't')
		{
			std::cout << "HEX to text convertion\n";
			if(argc == 3)
			{
				std::cout << "ASCII equivalent : " << hex2text(argv[2]);
			}
			else
			{
				std::cout << "Enter hex : ";
				std::cin.get(txt, 90, '\n');
				std::cout << "ASCII equivalent : " << hex2text(txt);
			}
		}
		else
		{
			std::cout << "Invalid output_format\n";
			usage(argv[0]);
		}
	}
	std::cout << std::endl;
	return 0;
}
