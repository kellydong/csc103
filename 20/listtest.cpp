#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data;
	node* next;
};

void printList(node* L)
{
	for (node* p = L; p != NULL; p=p->next) {
		cout << p->data << " ";
	}
	cout << "\n";
}

void insertSorted(node*& L, int x)
{
	node* p = L;    /* p will point to node right after added node */
	node* q = NULL; /* q will point to the node before p */
	/* find location to add new node: */
	while (p != NULL && p->data < x) {
		q = p;
		p = p->next;
	}
	/* at this point we've found where the new node should
	 * be placed: between q and p.  Issue: q might be null
	 * if the insertion is at the beginning of the list! */
	node* n = new node;
	n->data = x;
	n->next = p;
	if (q != NULL)
		q->next = n;
	else
		L = n;
}

/* read stdin into a list. */
int main()
{
	node* L = NULL; /* L points to first element of list */
	int x;
	/* special case for first node: */
	while (cin >> x) {
		insertSorted(L,x);
	}
	printList(L);
	return 0;
}

/* TODO: try to write the insert function above from scratch */
/* TODO: write a function that searches for an integer in a sorted list
 * and removes it if found. */
/* TODO: write a function that reverses a list.  To make the most out of
 * this exercise, perform the reversal simply by redirecting the pointers.
 * Don't call new or delete, and don't swap the values in different nodes. */
