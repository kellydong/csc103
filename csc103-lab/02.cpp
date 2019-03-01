#include <iostream>
#include <vector>
using std::vector;
using namespace std;

vector<int> evenValues(const vector<int> & V){
    vector<int> R;
    for(size_t i=0; i<V.size(); i++)
    {
        if(V[i] % 2 == 0)
            R.push_back(V[i]);
    }
    return R;
}

int main()
{
    vector<int> V;
    vector<int> R;

    int x;
    while (cin >> x) {
        V.push_back(x);
    }

    R = evenValues(V);
    for (size_t i = 0; i < R.size(); i++) {
        cout << R[i] << "\n";
    }
}
