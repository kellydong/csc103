/* The classic "hello world" program: print a message to screen.
 * NOTE: things between slash-* and *-slash are ignored by the compiler. */

#include <iostream>
/* "iostream" is just a file, and #include just copies and pastes it
 * into our program.  iostream contains some facilities to make input
 * and output easy for us.  E.g. "std::cout".  If for some reason you
 * want to see what's in there, the file is likely located in
 * /usr/include/c++/[version number]/iostream */

/* main is where your program begins. */
int main() /* this is (almost) always where your program starts */
{
	/* TODO: why do you need the quotes?  Find out what happens if you
	 * take them out.  And what is the '\n' for?  Do some experimenting
	 * to find out.  */
	std::cout << "hello world\n";
	/* TODO: remove the semicolon at the end of the above line, and
	 * see what error messages result when you try to compile. */
}

/* TODO: follow the tutorial on "building on the command line" from our
 * homepage.  Then just spend some time experimenting and see what you
 * can learn.  */

// vim:foldlevel=2
// NOTE: you can also use two slashes to start a comment, but
// it will only last until the end of the line.  Note also that the
// comment above (vim:...) tells vim to not hide much text upon
// opening this file.  Safe to ignore it though.
