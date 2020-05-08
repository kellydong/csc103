#include<iostream>
#include <vector>
//using std::vector;
using namespace std;

vector<int> noDuplicate(const vector<int> & V){
    vector<int> R;
    int newNum = V[0];
    R.push_back(newNum);
    size_t n = V.size();
    for(size_t i=1; i<n; i++)
    {
        if(V[i] != newNum){
            newNum=V[i];
            R.push_back(newNum);
        }
    }
    return R;
}

// need to add the * to read from or write to memory

int main()
{
    int n; /* hold input */
	vector<int> V;
	// V[1000000] = 0; /* seg fault x_x */
	while (cin >> n) {
		V.push_back(n);
	} /* V now contains all of stdin. */

	vector<int> U;
	U = noDuplicate(V);
	for (size_t i = 0; i < U.size(); i++) {
		cout << U[U.size() - i - 1] << "\n";
	}
	return 0;
}