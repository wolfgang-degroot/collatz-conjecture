#include <iostream>
#include "InfInt.h"
using namespace std;

pair<InfInt, InfInt> process(InfInt i, InfInt steps = 0, InfInt max = 0)
{
	InfInt n = i;
	InfInt s = steps;
	InfInt m = max;
	if (n <= 0)
		throw std::underflow_error("Input cannot be below one!");
	if (n == 1)
		return make_pair(s, m);
	if (n % 2 == 0)
		n = n/2;
	else
		n = n * 3 + 1;
	if (n > m)
		m = n;
	cout << i << " » ";
	s++;
	pair<InfInt, InfInt> p = process(n, s, m);
	return make_pair(p.first, p.second);
}

int main()
{
	InfInt input;

	cout << "Collatz Conjecture Calculator" << endl;
	cout << "Input an integer >";
	cin >> input;
	pair<InfInt, InfInt> s = process(input);
	cout << "1 (Loop)" << endl << endl;
	cout << "Input: " << input    << endl;
	cout << "Steps: " << s.first  << endl;
	cout << "Max:   " << s.second << endl;
	return 0;
}
