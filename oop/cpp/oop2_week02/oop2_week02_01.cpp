#include <iostream>
using namespace std;
int main() {

	int a = 3;
	int b = 7;
	int* const pi = &a;

	*pi = 11;
	cout << a << " " << *pi << "\n";
	a = -6;
	//pi = &b;
	cout << b << " " << *pi << "\n";

	return 0;
}