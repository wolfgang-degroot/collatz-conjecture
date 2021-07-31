#include <iostream>
using namespace std;

unsigned long long process(unsigned long long i, int steps = 0)
{
	unsigned long long n = i;
	int s = steps;
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
	unsigned long long input;

	cout << "Collatz Conjecture Calculator" << endl;
	cout << "Input an integer >";
	cin >> input;
	unsigned long long s = process(input);
	cout << "1 (Loop)" << endl << "Steps: " << s << endl;
	return 0;
}
