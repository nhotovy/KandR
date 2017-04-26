#include <stdio.h>

/* counts the number of newlines, tabs and blanks; 1st version */
main()
{
		int c, nl, t, b;
		
		nl = 0;
		t = 0;
		b = 0;
		while ((c = getchar()) != EOF)
		{
			if (c == '\n')
				++nl;
			if (c == '\t')
				++t;
			if (c == ' ')
				++b;
		}
		printf("New Lines: %d\n", nl);
		printf("Tabs:	   %d\n", t);
		printf("Blanks:	   %d\n", b);
}