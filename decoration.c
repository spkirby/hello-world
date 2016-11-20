#include <stdio.h>
#include <string.h>

void dec_puts(char* message)
{
	int i;
	int len = strlen(message) + 4;
	
	dec_row(len);
	printf("\n* %s *\n", message);
	dec_row(len);
}

void dec_row(int length)
{
	int i;
	
	for(i=0; i < length; i++)
	{
		putchar('*');
	}
}