#include <stdio.h>

int encryption_key = 42;

int main(void)
{
	int c;
	while ((c = getc(stdin)) != EOF)
	{
		// write any transformation here - converts any i/p to any o/p
		putc(c ^ encryption_key, stdout);
	}
	return 0;
}