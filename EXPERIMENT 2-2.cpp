#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Water Demand Charge: P35 \n";

	double num1;
	double num2;
	double num3;

	cout << "Previous Month's Meter Readings in Gallons: ";
	cin >> num1;

	cout << "Recent Meter Readings in Gallons: ";
	cin >> num2;

	cout << "Consumption Charge: P" << (num2 - num1)*1.10 << endl;

	cout << "Unpaid Balance: P";
	cin >> num3;

	if (num3 == 0 )
		cout << "Water Bill: P" <<  35 + ((num2 - num1)*1.10) + 0;
	else
		cout << "Water Bill: P" <<  35 + ((num2 - num1)*1.10) + 20;




	getch();
	return 0;
}