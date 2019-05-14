#include <set>
using std::set;

set<set<int>> powerset(set<int>& S)
{
    if(S.size()==0){ //base case: empty set
        set<int> E; // empty set
        set<set<int>> R; // return value
        R.insert(E); //now R = {{}}
        return R;
    }
    // now assume this works for smaller sets than S

    int x = *(S.begin()); //like a pointer to the first element to the set and save

    //make S smaller wo we can perform recursive calls:
    S.erase(x);
    set<set<int>> P = powerset(S);
    set<set<int>> R = P;
    // now add x to each element of P, and add that to R

    for(set<set<int>>::iterator i = P.begin(); i!=P.end(); i++){
        set<int> s = *i;
        s.insert(x);
        R.insert(s);
    }
    return R;
}

int main(void)
{
    return 0;
}