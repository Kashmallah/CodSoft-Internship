#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double num1, num2;
	double result;
	int num;
	char ch;
	cout << setw(10);
	cout << "\n\t\t\tEnter two integers ";
	cout << "\nEnter the first Integer :";
	cin >> num1;
	cout << "\nEnter the second Integer :";
	cin >> num2;
	system("cls");
	cout << "\n" << setw(7) << "\tPress Accordingly To Perform Following Actions";
	cout << "\n     Press 1 " << setw(4) << "ADDITION";
	cout << "\n     Press 2 " << setw(4) << "SUBTRACTION";
	cout << "\n     Press 3 " << setw(4) << "MULTIPLICATION";
	cout << "\n     Press 4 " << setw(4) << "DIVISION";
	cout << "\n     Press 5 " << setw(4) << "POWER";
	cout << "\n     Press 6 " << setw(4) << "SQUARE ROOT";
	cin >> num;
	switch (num)
	{
	case 1:
		system("cls");
		cout << "\n By Adding " << num1 << " and " << num2 << " that you provided :";
		result = num1 + num2;
		cout << "\n Result = " << result;
		break;
	case 2:
		system("cls");
		cout << "\n By Subtracting " << num1 << " and " << num2 << " that you provided :";
		result = num1 - num2;
		cout << "\n Result = " << result;
		break;
	case 3:
		system("cls");
		cout << "\n By Multiplying " << num1 << " and " << num2 << " that you provided :";
		result = num1 * num2;
		cout << "\n Result = " << result;
		break;
	case 4:
		system("cls");
		cout << "\n By Dividing " << num1 << " and " << num2 << " that you provided :";
		result = num1 / num2;
		cout << "\n Result = " << result;
		break;
	case 5:
		system("cls");
		cout << "\n Do You want to calculate " << num1 << " ^ " << num2 << " ? (Press y/Y or n/N) ";
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			cout << "\n By Taking Power of " << num1 << " ^ " << num2 << " that you provided :";
			result = pow(num1, num2);
			cout << "\n Result = " << result;
		}
		else
		{
			cout << "\n By Taking Power of " << num2 << " ^ " << num1 << " that you provided :";
			result = pow(num2, num1);
			cout << "\n Result = " << result;
		}
		break;
	case 6:
		system("cls");
		cout << "\n Do You want Square Root of " << num1 <<" ? (Press y/Y or n/N) ";
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			cout << "\n By Taking Square Root of " <<num1<<  "  :";
			result = sqrt(num1);
			cout << "\n Result = " << result;
		}
		else
		{
			cout << "\n By Taking Square Root of " << num2 << "  :";
			result = sqrt(num2);
			cout << "\n Result = " << result;
		}
		break;
	default:
		cout << "\nPlease Enter Correct Option!";
	}
	cout << "\nThank you for using the Calculator made by C++ Coding ";
	return 0;
}