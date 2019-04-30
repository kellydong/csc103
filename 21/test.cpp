#include <iostream>
using std::cout;
using std::cin;

void f(int n)
{
	cout << "calling " << n << "\n";
	if (n == 0) return;
	f(n-1);
	cout << "leaving " << n << "\n";
}

/* TODO: make sure you understand the output of this program. */

int main()
{
	f(7);
	return 0;
}

/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */
/* TODO: write a function that recursively computes terms of the
 * fibonacci sequence.  Be careful -- it will likely be quite
 * slow on large inputs!  See if you can understand why. */
/* TODO: read lecture 5 (l5.pdf) and come to class with questions (or
 * a thorough understanding of the content!). */
