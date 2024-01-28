#include <stdio.h>

int main(){
	int S=0;
	int i;
	for (i = 0; i<5; i++){
		if (i%2==1) continue;
		S+=1;
	}
	printf ("\nS=%d", S);
}
