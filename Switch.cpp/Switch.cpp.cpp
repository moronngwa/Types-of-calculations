// Switch.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
	double firstnumber,secondnumber,result;
	int operator;

	cout << "Enter two numbers" << endl;
	cin >> firstnumber >> secondnumber;
	
	cout << "Choose the operator you want to use" << endl;
	cout << "1:Addition" << endl;
	cout << "2:Subtraction" << endl;
	cout << "3:multiplication" << endl;
	cout << "4:division" << endl;
	cin >> operator;

	switch (operator) {
	case1:
		result = firstnumber + secondnumber;

		cout << "the addition of" << firstnumber << "and" << secondnumber << "is equal to" << result;
		break;
	case 2:
		result = firstnumber - secondnumber;
		cout << firstnumber << "sutracted by" << secondnumber << "is equal to" << result;
		break;
	case3:
		result = firstnumber * secondnumber;
		cout << firstnumber << "multiply by" << secondnumber << "is equal to" << result;
		break;
	case4:
		if (secondnumber == 0) {
			cout << "you cant divid by zero please enter another number" << endl;
			cin >> secondnumber;

			result = firstnumber / secondnumber;
				cout << fisrtnumber << "divided by" << secondnumber << "is equal to" << result;
		}
	}
	result = firstnumber / secondnumber;
		cout << fisrtnumber << "divided by" << secondnumber << "is equal to" << result;
		break;

		default:
			cout << "invalid operator selected,please enter the number of the operator's shown above" << endl;	

			return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
