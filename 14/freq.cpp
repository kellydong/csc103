#include <map>
using std::map;
#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main(void)
{
	string s;
	map<string,int> C;
	while (cin >> s)
		C[s]++;
	for (map<string,int>::iterator i=C.begin(); i!=C.end(); i++) {
		cout << (*i).first << " :: " << (*i).second << "\n";
	}
	/* NOTE: *i is of datatype pair<string,int> */
	return 0;
}
