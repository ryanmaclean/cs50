#import <stdio.h>
#import <cs50.h>
#import <string.h>

int main(void){
	string s = GetString();
	if (s != NULL){

		for (int i = 0; i < strlen(s); i++){
			printf("%c\n", s[i]);
		}
	}
	else
		printf("Please type a name :)\n");
}
