#include <iostream>
#include "InfInt.h"
using namespace std;

InfInt process(InfInt i, InfInt steps = 0)
{
	InfInt n = i;
	InfInt s = steps;
	if (n == 1 || n == 0)
		return s;
	if (n % 2 == 0)
		n = n/2;
	else
		n = n * 3 + 1;
	cout << i << " » ";
	s++;
	s = process(n, s);
	return s;
}

int main()
{
	InfInt input;

	cout << "Collatz Conjecture Calculator" << endl;
	cout << "Input an integer >";
	cin >> input;
	InfInt s = process(input);
	cout << "1 (Loop)" << endl << "Steps: " << s << endl;
	return 0;
}
