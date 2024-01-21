#include <stdio.h>



int main(){
	int x, sum;
	do {
		printf ("\nNhap so: ");
		scanf ("%d", &x);
		sum+=x;
	}
	while (x!=0);{
		printf ("\nsum = %d", sum);
	}
}

