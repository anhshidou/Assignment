#include <stdio.h>

int factorial(){
	int n, i;
	double p = 1;
	for(i=2; i<= n; i++);
	p*=i;
	return p;
}
int main(){
	int n;
	printf ("Enter n: ");
	do{
	scanf ("%d", &n);
}
while (n<0);
printf ("%lf", factorial(n));
return 0;
	
}
