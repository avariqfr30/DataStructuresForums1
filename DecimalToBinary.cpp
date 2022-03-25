// C++ program for decimal to binary
// conversion using recursion
#include <iostream>
using namespace std;

// Decimal to binary conversion
// using recursion
int find(int decimal_number)
{
	if (decimal_number == 0)
		return 0;
	else
		return (decimal_number % 2 + 10 *
				find(decimal_number / 2));
}

// Driver code
int main()
{
	int decimal_number = 25;
	cout << "The number you have entered is " << decimal_number << endl;
	cout << "The binary form of this number is " << find(decimal_number) << endl;
	return 0;
}