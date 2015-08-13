#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{

	printf("Type a word: ");
	char* s = GetString();

	printf("Type another word: ");
	char* t = GetString();

	if (s != NULL && t != NULL)
	{
		if (strcmp(s, t) == 0)
		{
			printf("You typed the same thing!\n");
		}
	}
	else 
	{
		printf("You typed something different!\n");
	}
}
