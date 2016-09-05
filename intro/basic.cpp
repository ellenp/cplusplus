#include <iostream>
int main(int argc, char** argv)
{
	std::cout<<"Hello world!";
	return 0;
}


/*

CHANGES THAT WILL NOT ALTER THE PROGRAM'S OUTPUT:

- Removing the space between #include and <iostream>
- Replacing <> by "" in <iostream>
- Removing the all the nextline after int main()
	#include <iostream.h>
	int main(){std::cout<<"Hello world!";}
- Removing int in int main
	#include <iostream.h>
	main(){std::cout<<"Hello world!";}
- Removing return 0
- Removing both int in inta main and the return 0
- Removing int argc, char** argv parameters
- Commenting out (/*int argc, char** argv* /)
- Inserting using namespace std; after #include line
  while still retaining std::cout


CHANGES THAT WILL RESULT IN ERROR:

- Removing the # in #include results in 
	error: ‘include’ does not name a type
- Removing <> in <iostream> results in 
	error: ‘cout’ is not a member of ‘std’
- Using iostream.h instead of iostream results in 
	fatal error: iostream.h: No such file or directory
- Removing next line after #include <iostream>
	warning: extra tokens at end of #include directive
	.
	.
	.
	collect2: error: ld returned 1 exit status
	make: *** [<builtin>: basic] Error 1
- Changing main's return type to void
	error: ‘::main’ must return ‘int’
- Removing std::
	error: ‘cout’ was not declared in this scope


CHANGES THAT WILL RESULT IN ERROR:

- Removing main's second parameter, char** argv
	warning: ‘int main(int)’ takes only zero or two arguments [-Wmain]
- Removing main's first argument, int argc
	warning: first argument of ‘int main(char**)’ should be ‘int’ [-Wmain]
	warning: ‘int main(char**)’ takes only zero or two arguments [-Wmain]
- Adding a semi-colon after #include <iostream>
	warning: extra tokens at end of #include directive

*/
