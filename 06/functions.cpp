/* introduction to functions.
 * reading: Prof. Li's notes, lectures 7 -- 10 */
#include <iostream>
#include <cstdio>
using std::cin;
using std::cout;
using std::endl;

/* syntax:
 * datatype function_name(parameterlist) { c++ statements...}
 * think of f(x) from your calculus days... remember this notation?
 * f:R ---> R
 * Breaking it down, it says there is a function named f, which has domain R
 * and range R.  The C++ equivalent would be something like:
 * double f(double);
 * NOTE: thing above is called a "function prototype"
 */

/* example: x --> 2x + 1, for integers x.
 * */
int f(int x) {
	/* rules go here: */
	return 2*x + 1;
}

/* TERMINOLOGY: the variable used in the parameter
 * list (like x in fn2 or fn1) is called the *formal
 * parameter*.  When you actually make a call, like
 * fn(a) in main, the variable a is the *actual parameter*.
 * Again, for by value parameters, the formal parameter
 * is a COPY of the actual, and for by reference, it is
 * a SYNONYM for the actual.
 * */

int main()
{
    cout << max(1,2,3) << endl;
    cout << average(3.2,3.4,4.5) << endl;
	return 0;
}

/* NOTE: we can have multi-parameter functions -- just separate each with
 * a comma, like this:
 * int f(int x, int y, int z) {...}
 * */

/* TODO: write a function that takes 3 integers and returns
 * the maximal value */
 int max(int x,int y,int z){
    int max =x;
    if (y>x)
        max=y;
    if (z>y)
        max=z;
    return max;
 }
/* TODO: write a function that takes 3 doubles and returns the
 * average value */
 double average(double x,double y,double z){
    double average = (x+y+z)/3;
    return average;
 }
/* TODO: write a function that takes two integer parameters and
 * swaps the contents, i.e., if x=2 and y=5, then after calling
 * swap(x,y), y=2 and x=5 */

  void swap(int* x,int* y){
    int a = *x;
    *x=*y;
    *y=a;
    return;
 }
// need to add the * to read from or write to memory

/* TODO: write an isPrime function that takes an integer and returns a boolean
 * value indicating whether or not it is prime.  */
 bool isPrime (int x) {
        int i = 2;
        bool prime = true;
        if (x <= 1)
        {
            prime = false;
            i = x;
        }
        while (i < x)
        {
            int check = x % i;
            i++;
            if (check == 0)
            {
                prime = false;
            }
        }
        return prime;
 }
/* TODO: write a *function* that takes an integer n and returns the
 * nth term in the Fibonacci sequence. */
/* TODO: write test code for all the above exercises. */
/* TODO: (WARNING: THIS IS NOT EASY. Only attempt this if you are bored.)
 * The previous exercise asked for you to compute the nth term of the
 * Fibonacci sequence.  Try to estimate approximately how many steps (number
 * of C++ statements, roughly) that your function takes to evaluate the input
 * n.  You will probably find that it is close to some constant multiple of n.
 * It turns out that there is a very clever way to do this in approximately
 * log(n) steps!  To find it, you'll probably need a hint or two to even get
 * started.  Ask me if you're interested.
 * */
