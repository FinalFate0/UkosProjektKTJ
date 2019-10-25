
#include <iostream>

int binToDec(string bin)
{
	int d = 0;
	int n = bin.size();
	for (int i = 0; i < n; i++)
	{
		d *= 2;
		d += bin[i] - '0';
	}
	return d;
}

int main()
{
    std::cout << "Hello World!\n";
	
}