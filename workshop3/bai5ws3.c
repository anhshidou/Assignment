#include <stdio.h>

double fibo(){
	int n;
	int t1=1;
	int t2=1;
	int f=1;
	int i;
	for (i=3, i<= n, i++){
		f = t1 + t2;
		t1 = t2;
		t2=f;
	}
	return f;
}
int main(){
	int n;
	printf ("Enter n: ");
	do {
		scanf ("%d", &n);
	} while (n<1);
	printf ("%lf", fibo(n));
	return 0;
}
