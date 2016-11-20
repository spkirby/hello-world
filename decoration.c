#include <stdio.h>
#include <string.h>

void dec_puts(char* message)
{
	int i;
	int len = strlen(message) + 4;
	
	for(i=0; i < len; i++)
	{
		putchar('*');
	}
	
	printf("\n* %s *\n", message);
	
	for(i=0; i < len; i++)
	{
		putchar('*');
	}
}