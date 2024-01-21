#include <stdio.h>

int sumdi(){
	int sum = 0;
	int n;
	do{
		int remainder = n%10;
		n = n/10;
		sum += remainder;
	}
	while (n>0);
	return sum;
}
int main(){
	int n;
	int s;
	printf ("Enter n: ");
	do {
		scanf ("%d", n);
		if (n>= 0){
			s = sumdi(n);
		}
	}
	while (n>=0);
	printf ("Sum of %d decimal digits: %d", n, s);
}
