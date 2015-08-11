#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
	if (argc == 2)
	{
		printf("hello, %s\n", argv[1]);
		return 0;
	}
	else
	{
		printf("Incorrect number of arguments\n");
		return 1;
	}
}
