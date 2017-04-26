#include <stdio.h>

/* counts the number of newlines; 1st version */
main()
{
		int c, nl;
		
		nl = 0;
		while ((c = getchar()) != EOF)
		{
			if (c == '\n')
				++nl;
		}
		printf("New Lines: %d\n", nl);
}