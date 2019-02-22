#include <iostream>
using std::cout;
using std::cin;
#include <cmath>
using std::sqrt;
#include <cstdio> // for printf

int main()
{
	int p;
	cin >> p;
	/* print all right triangles with integer sides
	 * and perimeter less than or equal to p. */
	/* IDEA: run through all possibilities of side lengths
	 * and test if the hypotenuse is an integer. */
	for (int b = 1; b <= p/2; b++) {
		for (int a = 1; a <= b; a++) {
			/* compute hypotenuse; check if it is an integer */
			int c = sqrt(a*a + b*b);
			if (a*a + b*b == c*c) {
				/* success!  print it */
				printf("(%i,%i,%i)\n",a,b,c);
				/* TODO: read the man page for printf.  You can
				 * get it via `man 3 printf`.  Try doing the above
				 * with cout, and note how gross it is. */
			}
		}
	}
	return 0;
}

/* TODO: try this using "option 1" from the notes (don't use
 * a square root function) */
/* TODO: try to understand the password brute force example
 * given in the brute-force subdirectory. */
