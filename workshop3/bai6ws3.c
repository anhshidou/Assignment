#include <stdio.h>

int isFibo(){
	int t1=1, t2=1, f=1;
	if (n==1){
		return 1;
	}
	while (f<n){
		f = t1 + t2;
		t1=t2;
		t2=f;
	}
	return n==f;
}
int main(){
	int n;
	printf ("Enter n: ");
	do {
		scanf ("%d", &n);
	} 
	while (n<1);
	if (isFibo(n) == 1){
		printf ("%d", isfibo(n));
	}
}



