#include <stdio.h>

int main(){
	int x, sum = 0;
	do {
		printf ("\nNhap so: %d", sum);
		scanf ("%d", &x);
		sum+=x;
	}
	while (x!=0);{
		printf ("\nsum = %d", sum);
	}
}
