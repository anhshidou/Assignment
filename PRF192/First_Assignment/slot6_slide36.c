#include <stdio.h>

int main(){
	int S = 0, i = 0;
	goto RUN;
	printf ("\nHello-1\n");
	printf ("\nHello-2\n");
	printf ("\nHello-3\n");
	RUN:
		printf ("%d\n", S);
}
