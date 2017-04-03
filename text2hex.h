#ifndef TEXT_HEX_H
#define TEXT_HEX_H

#include <string>

// function to convert given TWO charactered array to ascii and return the ascii
int hex2dec(char* txt)  
{
	int num = 0;
	for(int i=0; txt[i] != '\0'; i++)
	{
		int digit;
		switch(txt[i])
		{
			case '1': digit = 1; break;
			case '2': digit = 2; break;
			case '3': digit = 3; break;
			case '4': digit = 4; break;
			case '5': digit = 5; break;
			case '6': digit = 6; break;
			case '7': digit = 7; break;
			case '8': digit = 8; break;
			case '9': digit = 9; break;
			case 'a':
			case 'A': digit = 10; break;
			case 'b':
			case 'B': digit = 11; break;
			case 'c':
			case 'C': digit = 12; break;
			case 'd':
			case 'D': digit = 13; break;
			case 'e':
			case 'E': digit = 14; break;
			case 'f':
			case 'F': digit = 15; break;
			default: return -1; break;
		}
		num = num*16 + digit;
	}
	return num;
}
// Convert the proivided HEX string to text
std::string hex2text(char* txt)
{
	std::string text;
	int textcount=0;
	for(int i=0; txt[i] != 0;)
	{
		char nm[3];
		for(int j=0; j<2; j++)
		{
			nm[j] = txt[i++];
		}
		nm[2] = '\0';
		int num = hex2dec(nm);
		if(num < 0)
		{
			text = "Invalid HEX";
			return text;
		}
		char dec = char(num);
		text += dec;
	}
	return text;
}
// Convert the provided text to HEX
std::string text2hex(char* txt)
{
	std::string hex;
	for(int i=0; txt[i] != '\0'; i++)
	{
		int num = int(txt[i]);
		char chardigit[2];
		int count =1;
		while(num!=0)
		{	
			int digit = num%16;
			num /= 16;
			switch(digit)
			{
				case 1: chardigit[count--] = '1'; break;
				case 2: chardigit[count--] = '2'; break;
				case 3: chardigit[count--] = '3'; break;
				case 4: chardigit[count--] = '4'; break;
				case 5: chardigit[count--] = '5'; break;
				case 6: chardigit[count--] = '6'; break;
				case 7: chardigit[count--] = '7'; break;
				case 8: chardigit[count--] = '8'; break;
				case 9: chardigit[count--] = '9'; break;
				case 10: chardigit[count--] = 'A'; break;
				case 11: chardigit[count--] = 'B'; break;
				case 12: chardigit[count--] = 'C'; break;
				case 13: chardigit[count--] = 'D'; break;
				case 14: chardigit[count--] = 'E'; break;
				case 15: chardigit[count--] = 'F'; break;
			
			}
		}
		for(int i=0; i < 2; i++)
		{
			hex += chardigit[i];
		}
	}
	return hex;
}

#endif
