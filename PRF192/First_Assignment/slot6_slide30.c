#include <stdio.h>

int main(){
	char c;
	int noDigits, noLetters, noOthers;
	
	printf ("Enter strings: ", &c);
	scanf ("%c", &c);
	while (c!='\n'){
		c = getchar();
		if ('0' <= c && c <= '9') noDigits++;
		else {
			if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) noLetters++;
			else noOthers++;
		}
	}
	printf ("Digits: %d\n", noDigits);
	printf ("Letters: %d\n", noLetters);
	printf ("Others: %d\n", noOthers);
}
