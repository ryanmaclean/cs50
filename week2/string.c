#import <stdio.h>
#import <cs50.h>
#import <string.h>

int main(void){
	printf("Type a name, and we'll print it one character at a time!\n");
	string s = GetString();
	if (s != NULL){
		for (int i = 0, n= strlen(s); i < n; i++){
			printf("%c\n", s[i]);
		}
	}
	else
		printf("Please type a name :)\n");
}
