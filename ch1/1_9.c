#include <stdio.h>

/* copy input to output, replacing each string 
 * of one or more blanks by a single blank */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
	    if (c == ' ') {
	        while ((c = getchar()) == ' ')
		    ;
	    putchar(' ');
	    }
	    putchar(c);
	}
}

