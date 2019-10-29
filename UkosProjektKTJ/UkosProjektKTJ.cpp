#include <string>
#include <iostream>
using namespace std;

int decToBin(int num);
int binToDec(string bin);
int reverseInt(int num);

int main()
{

	int choice, inputOne, result;
	string inputTwo, quit;

	while (true) {
		cout << "What do you want to do?" << endl << endl << "1 - Convert decimal to binary" << endl << "2 - Convert binary to decimal"<<endl;
		cin >> choice;
		if (choice == 1) {

			cout << "Enter your number"<<endl;
			cin >> inputOne;
			result = decToBin(inputOne);
			cout << "Your result is " << result << "."<<endl;


		}
		else if (choice == 2) {

			cout << "Enter your number"<<endl;
			cin >> inputTwo;
			result = binToDec(inputTwo);
			cout << "Your result is " << result << "."<<endl;
		}

		cout << "Do you want to continue? (y/n)"<<endl;
		cin >> quit;
		if (quit == "n") {
			break;
		}

	}
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

