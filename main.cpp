#include <iostream>
using namespace std;

int process(int i)
{
	int n = i;
	if (n == 1)
		return 1;
	if (n % 2 == 0)
		n = n/2;
	else
		n = n * 3 + 1;
	cout << i << " -> ";
	process(n);
	return 0;
}

int main()
{
	int input;

	cout << "Collatz Conjecture Calculator" << endl;
	cout << "Input an integer >";
	cin >> input;
	process(input);
	cout << "1 (Loop)" << endl;
	return 0;
}
