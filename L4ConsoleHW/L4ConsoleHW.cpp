#include <iostream>
using namespace std;

int main()
{
	// Task 1
	int x, y, x1, y1, x2, y2;

	cout << "Enter the top-left corner:\n";
	cin >> x1;
	cin >> y1;
	cout << "Enter the bottom-right corner:\n";
	cin >> x2;
	cin >> y2;
	cout << "Enter the point:\n";
	cin >> x;
	cin >> y;

	if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
	{
		cout << "The point in in the rectangle\n\n";
	}
	else
	{
		cout << "The point is not in the rectangle\n\n";
	}

	// Task 2
	int ticket;

	cout << "Enter the ticket number (6 digits): ";
	cin >> ticket;

	int sum1 = ticket / 100000 + ticket / 10000 % 10 + ticket / 1000 % 10;
	int sum2 = ticket / 100 % 10 + ticket / 10 % 10 + ticket % 10;

	if (sum1 == sum2)
	{
		cout << "Ticket is lucky\n\n";
	}
	else 
	{
		cout << "Ticket is unlucky\n\n";
	}

	// Task 3
	double num1, num2, result;
	int choice;

	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	cout << "\nChoose an operation:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Remainder\n";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n\n";
			break;

		case 2:
			cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n\n";
			break;

		case 3:
			cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n\n";
			break;

		case 4:
			cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n\n";
			break;

		case 5:
			cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << "\n\n";
			break;

		default:
			cout << "Invalid choice\n\n";
			break;
	}

	// Task 4
	int num;

	cout << "Enter a number: ";
	cin >> num;
	num >= 0 && num <= 100 ? cout << "Number is between 0 and 100\n\n" : cout << "Number is not between 0 and 100\n\n";

	// Task 5
	float number;

	cout << "Enter a number: ";
	cin >> number;
	number - (int)number == 0 ? cout << "Number doesn't have decimal part\n\n" : cout << "Number has decimal part\n\n";

	// Task 6
	srand(time(0));
	int randomNum = rand() % 3;
	string question;

	cout << "Ask anything:\n";
	cin >> question;

	switch (randomNum)
	{
	case 0:
		cout << "Yes\n\n";
		break;

	case 1:
		cout << "Maybe\n\n";
		break;

	case 2:
		cout << "No\n\n";
		break;

	default:
		break;
	}
}