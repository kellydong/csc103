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

/* read stdin into a list. */
int main()
{
	node* L = NULL; /* L points to first element of list */
	int x;
	/* special case for first node: */
	if (cin >> x) {
		L = new node;
		L->data = x;
		L->next = NULL;
	}
	/* now setup invariant for general case: */
	node* p = L; /* p will always point to last node. */
	if (!p) return 0;
	/* at this point you know list is not empty, and p
	 * points to the very last node. */
	while (cin >> x) {
		p->next = new node;
		p = p->next; /* restores invariant; p is again
		                pointing to the last node */
		p->data = x;
		p->next = NULL;
	}
	/* done reading stdin into a list.  Print it: */
	printList(L);
	/* now look for a node with 4, and if you find it,
	 * add a new node with 99 right after. */
	p = L;
	while (p != NULL && p->data != 4) {
	// while (p->data != 4 && p != NULL) {
		/* NOTE: the above looks the same, but would crash!
		 * Look up "short circuit evaluation" to learn more. */
		p = p->next;
	}
	/* at this point, either p is NULL, or we found 4
	 * and p points to that node. */
	if (p != NULL) { /* add the node */
		node* n = new node;
		n->data = 99;
		n->next = p->next;
		p->next = n;
	}
	printList(L);
	return 0;
}

/* TODO: write a function that takes a list (as a pointer to the first node)
 * and two integers x,y, searches for x, and inserts a new node containing y
 * *before* the node with the x.  If x is not found, append y to the end of
 * the list. */
/* TODO: make sure you are capable of recreating all the code from this lecture
 * (which of course does NOT mean you have memorized it, but that you
 * understand it). */
/* TODO: write a function that takes a list and *clears* it (frees memory for
 * all nodes). */
