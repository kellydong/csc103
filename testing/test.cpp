#include<iostream>
#include <vector>
//using std::vector;
#include<string>
using namespace std;

const string teststring = "lololololo";
/* TODO: finish the find function we outlined in class.  It should take two
 * strings and returns an integer value indicating whether or not the first
 * was a substring of the second.  Remember that the return value should be
 * the index at which the string was found, or -1 to indicate that the string
 * was not found.
 * */
int find(const string& s1, const string& s2) {
    n1=s1.length();
    n2=s2.length();
    count = 0;
    for(int i=0; i<=n1-n2; i++){
        if(s1[i] == s2[count])

    }
	return -1;
}

/* NOTE: there is a built-in string function for this (find(str,pos)).
 * TODO: try it out (but don't use it to solve the above, of course!).
 * */

int main()
{
    string s1 = 'hello world'
    string s2 = 'wo'
    cout << s1.find(s2) << endl;
	return 0;
}

