#include <stdio.h>

int main(){
	int m, n, i, S = 0;
	printf ("Enter value: ", &n);
	printf ("Enter second value: ", &m)
	scanf ("%d%d", &n, &m);
	for (i=m; i <= n; i++){
		S+=i;
	}
	printf ("%d", S);
}
