/* More about loops.  */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* BIG PICTURE IDEAS WITH LOOPS.
	 * 1. "Brute force" -- leverage the speed of the computer to explicitly
	 *    run through an entire space of potential solutions, checking
	 *    each candidate for validity.  This is usually pretty trivial.
	 * 2. Maintaining invariants -- when computing some aggregate function
	 *    of a long list of inputs, initialize a variable to be something
	 *    like "the right answer so far" and then read new inputs one by
	 *    one, *updating your candidate answer* so that after each iteration
	 *    of the loop, it is ALWAYS the "right answer so far".
	 * NOTE: even brute force typically has an invariant hiding somewhere, but
	 * it usually isn't all that interesting.
	 * Let's see some examples: */

	/* TODO: sum the squares of all integers from 1..100.
	 * I.e., compute 1+4+9+...+10000 */

	/* TODO: write a loop that prints the sum of the first n odd cubes. */

	/* TODO: make sure you can compute similar things, like the min, max,
	 * sum, product, and the average of numbers given on stdin.
	 * Try to take the following very high level steps:
	 * 1. First, think about how many variables you will need, and for what
	 *    purposes.
	 * 2. Declare the variables, and in comments, state the meaning of each
	 *    variable.
	 * 3. Loop through the input and make sure the meaning of each of your
	 *    variables is preserved at the end of each iteration of the loop.
	 * 4. Finally, print the results.
	 * */

	/* TODO: finish our "brute force" process for the gcd of two integers */

	/* TODO: brute force test for perfect cubes.  Check if
	 * n = k^3 for some integer k.  */

	/* TODO: write code that gets an integer n from the user and prints out
	 * the n-th term of the fibonacci sequence. */

	/* TODO: a slight generalization of an earlier exercise: for integers
	 * n and k, determine the largest power of k that divides n.
	 * NOTE: see if you can formalize the invariant you used to solve this.
	 * */

	/* TODO: write a program that reads (arbitrarily many) integers from
	 * stdin and outputs the *second* smallest one.  NOTE: you don't need
	 * to store many numbers (all at once, that is) to do this!  You'll
	 * only need a few integer variables.  Think about invariants! */

	return 0;
}

// vim:foldlevel=1
