#include <stdio.h>

int main(){
	int S=0, S2=100, i=0;
	goto RUN_2;
	RUN_1:
	if (i==0){
		printf ("\nHello-1\n");
		printf ("\nHello-2\n");
		printf ("\nHello\-3n");
	}
	RUN_2:
		printf("%d\n", S2);
		goto RUN_1;
}
