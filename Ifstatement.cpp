#include <iostream>

using namespace std;

int main ()
{
	char choice;
	cout << "Is it raining? [y / n]: ";
	cin >> choice;
	
	if(choice == 'y') {
		cout << "Get an umbrella.";
	} else if (choice == 'n') {
		cout << "Is it sunny.";
	} else {
		cout << " Invalid Input.";
	}
	return 0;
}	