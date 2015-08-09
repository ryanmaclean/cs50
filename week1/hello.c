#include <stdio.h>
#include <cs50.h>
int main(void){
	printf("Your name please: " );
	string s = GetString();
	printf("Hello, %s \n", s);
}


