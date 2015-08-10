#import <stdio.h>
#import <cs50.h>

int main(void){
	string s = GetString();
	for (int i = 0; i < 6; i++){
		printf("%c\n", s[i]);
	}
}
