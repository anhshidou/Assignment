#include <stdio.h>

void pmmd(int n){
	int digit, min, max, remainder;
	digit = n % 10;
	n = n/10;
	min = max = remainder = digit;
	while (n>0){
		digit = n%10;
		n = n/10;
		remainder = digit;
		if (min > remainder){
			min = remainder;
		} 
		if (max < remainder){
			max = remainder;
		}
	}
	printf ("min= %d\n", min);
	printf ("max = %d\n", max);
}
int main(){
	int n;
	printf ("Enter n: ");
	do {
		scanf ("%d", &n);
		
	}
	while (n<0);
	pmmd(n);
}
