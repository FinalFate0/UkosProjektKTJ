#include <string>
#include <iostream>
using namespace std;

int decToBin(int num);
int binToDec(string bin);
int reverseInt(int num);

int main()
{

	
	
}

int reverseInt(int num)
{
	int revnum = 0;
	while (num > 0)
	{
		revnum = revnum * 10 + num % 10;
		num = num / 10;
	}
	return revnum;
}
int decToBin(int num)
{
	int wyn = 0;
	int i = 10;
	while (num != 0)
	{
		wyn = wyn * 10;
		wyn = wyn + num % 2;
		num = num / 2;
	}
	wyn = reverseInt(wyn);
	return wyn;
}
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

