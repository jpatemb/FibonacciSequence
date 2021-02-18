//Fibonacci Sequence

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const unsigned long limit = 4294967295;
	unsigned long next = 0;
	unsigned long last = 1;
	long sum;

	cout << "This program will print the Fibonacci Sequence:\n\n";
	while (next < limit / 2)
	{
		cout << last << " ";
		sum = next + last;
		next = last;
		last = sum;
	}
	_getch;
}