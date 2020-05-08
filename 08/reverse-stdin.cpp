/* read all of stdin; print in reverse order. */
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int n; /* hold input */
	vector<int> V;
	// V[1000000] = 0; /* seg fault x_x */
	while (cin >> n) {
		V.push_back(n);
	} /* V now contains all of stdin. */
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[V.size() - i - 1] << "\n";
	}
	return 0;
}

/* TODO: write a function that takes a vector and searches for
 * a particular value x, returning true if and only if x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */
 bool search(const vector<int> & V, int x){
    for(size_t i=0; i<V.size(); i++)
    {
        if(V[i] == x)
            return true;
    }
    return false;
}
/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
/* TODO: write a function that takes a vector and places the elements
 * in sorted order.  Warning: this could be kind of challenging. */
