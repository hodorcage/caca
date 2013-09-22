#include <iostream>

using std::cout;
using std::endl;

int foo(int a, int b)
{
	return a*b;
}

int main()
{
	cout << "Hello world!" << endl;
	int a = 12;
	cout << foo(a, a) << endl;

	return EXIT_SUCCESS;
}
