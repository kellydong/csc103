#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

// Write a recursive function to computer the powerset of a given set

vector < vector<int> > powerSet (vector<int> & S){
    vector< vector<int> > res;
    // Base case: the power set of an empty set is an empty set
    if(S.size()==0){
        res.push_back(vector<int>());
        return res;
    }

    int tmp = S.back(); // keep the back element in the set
    S.pop_back(); // remove the back element
    res=powerSet(S); // S->Sx
    size_t psize = res.size();
    for(size_t i=0; i<psize; i++){
        vector<int> V =res[i];
        V.push_back(tmp);
        res.push_back(V);
    }
    S.push_back(tmp);
    return res;
}

int main(){
    vector<int>
    powerSet(0,1,2)
    for (size_t i=3; i<n; i++)
        cout << V[n-1-i]<< "\n";

}