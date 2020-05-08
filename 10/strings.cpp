/* strings.cpp
 * More examples working with strings...
 * */
#include <iostream>
using std::cin;
using std::cout; 
using std::endl;
#include <string>
using std::string;

const string teststring = "lolololol";

/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.
 * */
size_t countChars(const string& s, char c)
{
	/* TODO: see what happens if you try to modify s in this function. */
	/* TODO: remove the const modifier and try to call this function
	 * on teststring above.  Take note of the compiler error in case
	 * you see it again later (the message from g++ might not be all
	 * that easy to read/understand). */
	size_t n = s.length();
    int count = 0;
    for (size_t i=0; i<n; i++){
        if(s[i] == c)
            count++;
    }
	return count;
}

/* TODO: write the following function which converts all lower
 * case letters to upper case.  NOTE: there are library functions
 * that will convert a single character (see 'man 3 toupper'),
 * but it might be more instructive to do it without using those.
 * If doing it without the help of toupper, note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).
 * */
void YELL(string& s) {
	/* make all lower case chars upper case. */
}

/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */
 bool palindrome(const string& s)
{
    bool palindrome = true;
    size_t n = s.length();
    for (size_t i=0; i<n; i++){
        if(s[i] != s[n-i-1])
            palindrome = false;
    }
	return palindrome;
}

/* TODO: write a function that takes a string by reference and reverses it.
 * */

 void reverse(const string& s)
{
    size_t n = s.length();
    for (size_t i=0; i<n/2; i++){
        char temp = s[i];
        s[i]=s[n-1-i];
        s[n-1-i] = temp;
    }
}

/* TODO: finish the find function we outlined in class.  It should take two
 * strings and returns an integer value indicating whether or not the first
 * was a substring of the second.  Remember that the return value should be
 * the index at which the string was found, or -1 to indicate that the string
 * was not found.
 * */
int find(const string& s1, const string& s2) {
	return -1;
}

/* NOTE: there is a built-in string function for this (find(str,pos)).
 * TODO: try it out (but don't use it to solve the above, of course!).
 * */

int main() {
    char c ='o';
    cout << countChars(teststring,c) << endl;
    cout << palindrome(teststring) << endl;
	/* TODO: write test code for all of the functions you wrote above */
	return 0;
}
