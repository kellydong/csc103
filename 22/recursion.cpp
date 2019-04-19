#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

// TODO: write a recursive function that prints the base 10 digits of n
// vertically to cout.  for example, printVertically(2358) would print
// 2
// 3
// 5
// 8
// Rules: you can't use any loops.  You can't use vectors or arrays.
// Just let the recursive function calls do the work for you.
void printVertically(unsigned long n)
{
	// your code goes here.
}

bool search(int* A, int size, int x)
{
	/* TODO: Try to write a recursive version of binary search.
	 * Outline:
	 * 1. if the array is empty (size < 1) return false.
	 * 2. if x is less than the value in the middle, recursively search
	 *    the left subarray, else recursively search the right subarray.
	 * Test out your program, and try to prove (by induction) that it works.
	 * (There are some subtle points about making sure the size is always
	 * decreasing...)
	 * */
	return false;
}

/* TODO: try to write merge sort, refering to the notes as little as posible.
 * */

int main()
{
	/* how to call merge sort: */
	int A[10] = {33,2,19,6,7,91,22,71,18,49};
	int aux[10]; /* auxillary space for merging. */
	mergeSort(A,10,aux);
	for (size_t i = 0; i < 10; i++) {
		printf("A[%lu] = %i\n",i,A[i]);
	}
	return 0;
}
