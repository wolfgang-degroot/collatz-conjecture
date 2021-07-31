#include <iostream>
using namespace std;

int process(int i, int steps = 0)
{
	int n = i;
	int s = steps;
	if (n == 1)
		return s;
	if (n % 2 == 0)
		n = n/2;
	else
		n = n * 3 + 1;
	cout << i << " -> ";
	s++;
	s = process(n, s);
	return s;
}

int main()
{
	int input;

	cout << "Collatz Conjecture Calculator" << endl;
	cout << "Input an integer >";
	cin >> input;
	int s = process(input);
	cout << "1 (Loop)" << endl << "Steps: " << s << endl;
	return 0;
}
