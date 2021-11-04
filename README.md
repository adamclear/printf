This project is for Holberton Shool, Lesson 0x12 printf.

	We are recreating, in part, the C function printf.

	In order to properly use the printf that we have built you will have to call
	the function with the syntax _printf().

	The arguments that should be passed when calling _printf should be;

	1. At least one argument consisting of a string of characters between two
	quotes "".

	2. You can also use specifiers to indicate the use of further arguments
	within the intital string argument.

		_printf("This is an example. %s\n", "This is an additional arg.");

	The above script would print;

		This is an example. This is an additional arg.

	3. You can use as many sepcifiers/arguments as you wish with _printf, but
	ensure that every specifier you use has a companion argument.

	4. Here are the specifiers that _printf supports, their use, and the type
	of argument required to be paired with them;

		%s - A string of characters. - char *
		%c - A single character. - char
		%d - A signed decimal integer - int
		%i - A signed decimal integer - int
		%% - Prints a single % character - (no argument)
		%b - Converts and unsigned int to binary - unsigned int
	