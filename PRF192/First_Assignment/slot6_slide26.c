#include <stdio.h>

int main(){
	int n, i;
	int sum1 = 0;
	int sum2;
	int sum3 = 0;
	printf ("n= ");
	scanf ("%d", &n);
	
	for (i=1; i <= n; i++)
		sum1 += i;
	
		printf ("\nsum1=%d", sum1);
	
	for (sum2 = 0, i = 1; i <= n; i++)
		sum2 +=1;
	
		printf ("\nsum2=%d", sum2);
	
	for (i = 1; i <= n;){
		sum3 += i;
		i++;
	}
	printf ("\nsum3=%d", sum3);
	return 0;
}
