#include <iostream>
using std::cout;

int main()
{
	int x = 65;
	char c = 65; /* range for c: 0 <= c < 256 */
	char d = 'A';
	cout << x << "\n"; /* prints "65" */
	cout << c << "\n"; /* prints "A" */
	cout << d << "\n"; /* also prints "A" */
	cout << "#bytes for char: " << sizeof(c) << "\n";
	cout << "#bytes for int:  " << sizeof(x) << "\n";
	/* how to put contents of one variable in another? */
	int y = 5;
	x = y; /* set contents of x to be same as contents of y */
	/* other types: floating point: */
	double z = 2.0;
	cout << y / z << "\n";
	x = z; /* NOTE: ... */
	cout << y / x << "\n";
	/* NOTE: double datatype is represented in a format kind
	 * of like scientific notation.  It has some issues; for
	 * example, algebraic identities might fail.  TODO: try to
	 * find an example where the cancellation law does NOT hold.
	 * That is, set floating point values a,b,c such that
	 * a+c == b+c, and yet a =/= b */

	return 0;
	/* NOTE: the "return 0" sends the value 0 back to
	 * the shell.  0 is interpreted as "OK", and anything
	 * else is interpreted as some kind of failure.
	 * From the shell, you can see the return code of the
	 * most recent command by running `echo $?`. */
}

/* TODO:
 * 1. Do the reading: in particular Prof. Li's notes
 *    and the l1.pdf lecture I wrote.
 * 2. Again, make sure you can compile this on the command line.
 * 3. Experiment with the above.  make a change that doesn't compile
 *    and try to make sense out of the resulting error messages.
 * 4  Make sure you have streamlined the process of editing,
 *    compiling, and testing your program.
 * 5. Read the tutorial about git.  Be sure to get
 *    familiar with 'git diff' and 'git log -p'.
 * */

/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).
 * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */
