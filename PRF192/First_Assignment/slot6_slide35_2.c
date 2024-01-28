#include <stdio.h>

int main(){
	int S = 0;
	int i;
	
	for (i=0; i<5; i++){
		if (i%2==0) S+=1;
	}
	printf ("\nS=%d", S);
}
