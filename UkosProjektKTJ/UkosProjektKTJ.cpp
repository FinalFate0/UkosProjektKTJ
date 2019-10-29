#include <string>
#include <iostream>
using namespace std;

string decToBin(int num);
int binToDec(string bin);

int main()
{

	int choice, inputOne;
	string inputTwo, quit;

	while (true) {
		cout << "What do you want to do?" << endl << endl << "1 - Convert decimal to binary" << endl << "2 - Convert binary to decimal"<<endl;
		cin >> choice;
		if (choice == 1) {
			string result;
			cout << "Enter your number"<<endl;
			cin >> inputOne;
			result = decToBin(inputOne);
			cout << "Your result is " << result << "."<<endl;


		}
		else if (choice == 2) {
			int result;
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
	
string decToBin(int num)
{
	string wyn="";
	int i = 10;
	while (num != 0)
	{
		wyn = (char)('0'+num % 2)+wyn;
		num = num / 2;
	}
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

