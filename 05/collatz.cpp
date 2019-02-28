#include <iostream>
using std::cout;
using std::cin;

int main()
{
	/* count number of steps before the sequence terminates */
	/* warm up: make this work for one number. */
	int x; /* store current input */
	while (cin >> x) {
		/* compute sequence for single number */
		int n = x; /* current number in sequence */
		int count = 0; /* count number of steps. */
		while (n != 1) {
			/* apply the rules; increment count */
			if (n%2 == 0 /* n is even */) {
				n /= 2; /* same as n = n/2 */
			} else {
				n = 3*n + 1;
			}
			count++; /* same as count = count + 1 */
		}
		cout << count << " steps required for " << x << ".\n";
	}
	return 0;
}

/* TODO: delete the entire thing and rewrite it from scratch. */
/* TODO: keep track of the maximal intermediate value and print that out
 * along with the result. */
/* NOTE: try this command to list the results of the first 500 numbers:
 * $ echo {1..500} | ./collatz | less
 * You can also sort them by the longest sequences:
 * $ echo {1..500} | ./collatz | sort -rn | less
 * */

// vim:foldlevel=1
