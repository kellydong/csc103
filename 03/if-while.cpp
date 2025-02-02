#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* IF STATEMENTS */
	/* IDEA: execute a piece of code 0 or 1 times, conditioned upon a
	 * boolean expression.
	 * */

	int n;
	cin >> n;
	/* let's try to print out whether or not n is even or odd. */
	if (n%2 == 1) {
		cout << n << " was odd\n";
	} else {
		cout << n << " was even\n";
	}
	// NOTE: the percent sign (%) gives the remainder of division,
	// while the normal slash (/) gives the quotient.  You could
	// compute the former from the latter: n - (n/d)*d == n%d

	/* IF STATEMENT: GENERAL FORM
	 * if (<boolean expression>) {
	 *     any statements can go here!
	 * } else if (<some other boolean expression>) {
	 *     do these if second boolean is true
	 * } <potentially more else ifs...> {
	 * } else {
	 *     do these if all other conditions failed.
	 * }
	 * NOTE: at most one block of statements will happen.
	 * (Precisely one if there is an else clause.)
	 * */

	/* NOTE: one equals sign is assignment, not a boolean!  This can be a
	 * common mistake, especially since the mistake *still compiles*.
	 * Example: */

	if (n == 99) {
		cout << "n was 99!\n";
	}

	/* To understand the above behavior, you must realize that
	 * 1. an assignment statement has a value (like any other expression) and
	 * 2. integers can be interpreted as booleans, and the convention is that
	 *    0 represents false, and all other integers represent true.
	 * NOTE: if you compile with the flag -Wall, g++ will warn you about
	 * this being a potential problem.  -Wall is a good default, actually. */

	/* NOTE: Boolean expressions are expressions that can evaluate to either
	 * true or false.  For example, x == 3, or response != "yes".
	 * other (binary) boolean operators:
	 * ==
	 * !=
	 * <
	 * >
	 * <=
	 * >=
	 * The above work on integers, strings, chars, and lots more.
	 * Furthermore, we have the following operators on booleans:
	 * && -- this gives the logical "and"
	 * || -- this gives the logical "or"
	 * !  -- this gives the logical negation
	 * */

	/* LOOPS */
	#if 0
	while (true) {
		cout << "yay for legible screens! :D :D :D";
	}
	/* NOTE: spam Ctrl-c if you ever accidentally (or otherwise) run
	 * a program that contains an infinite loop. */
	#endif
	/* example: add all integers from 1..100 */
	int i = 1;
	int sum = 0;
	while (i<=100) {
		sum = sum+i;
		i = i+1; /* shorthand: i++ */
	}
	cout << "sum = " << sum << "\n"; //5050
	/* TODO: guess the value of i at this point. */
	cout << "i = " << i << "\n"; //101

	return 0;
}

/* TODO: make sure you've done all the reading, and try the exercises
 * at the end of l1.pdf. */

/* TODO: read a list of integers from stdin and print the *product* of
 * them all.  NOTE: to read integers from stdin, you can use a loop
 * like this: while (cin >> n) {...}.  Then run the program with
 * integers fed to stdin like this: echo 8 2 3 | ./a.out
 * and you should get 8*2*3 = 48
 * */
int main()
{
    int product = 1;
    int x;
    while(cin>>x)
    {
        product *= x;
    }
    cout << product << endl;
}
/* TODO: given an integer n, find exponent of the largest power of two that
 * divides n.  Example: if n = r*8 with r odd, then you should output 3
 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
 * number's factorization into primes.)
 * (IDEA: keep on dividing n by two until we can't,
 * and keep track of how many times it worked.) */

 int main(){
    int x;
    cin>>x;
    int count = 0;
    while (x%2 == 0){
        x=x/2;
        count++;
    }
    cout<<count<<endl;
}
