#include <iostream>
using namespace std;


void mult() {
	int a;
	int b;
	char c = '*';

	std::cout << "aVVV: " << endl;
	cin >> a;
	std::cout << "b: " << endl;
	cin >> b;
	std::cout << "operator?: " << endl;
	cin >> c;
	if (c == '*')
		std::cout << "result: " << a * b << endl;
	else
		std::cout << "Enter a real operator!" << endl;
}




int main()
{
	int a;
	int b;
	string c;


	std::cout << "a: " << endl;
	cin >> a;
	std::cout << "b: " << endl;
	cin >> b;
	std::cout << "operator?: " << endl;
	cin >> c;
	if (c == "*") {
		std::cout << "Adding " << a << b << endl;
		std::cout << "Result! " << a + b;

	}
	else {
		std::cout << "Not a real operator!" << endl;
	}


	return 0;
	



}

