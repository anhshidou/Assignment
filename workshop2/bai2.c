#include <stdio.h>

int main(){
	long pa = 9000000, pd = 3600000;
	long tf, ti, income, n, it;
	
	printf ("Enter your income tax:");
	scanf ("%ld", &income);
	printf ("Enter your dependants:");
	scanf ("%ld", &n);
	tf = 12*(pa + n*pd);
	printf ("Tax-free income: %ld\n", tf);
	
	ti = income - tf;
	if (ti <= 0){
		printf ("Taxable-income = 0\n");
	} else {
		printf ("Taxable-income = %ld\n", ti);
	}
	if (ti <= 5000000){
		it = ti * 0.05;
		
	} else if (ti <= 10000000){
		it = 250000 + (ti-5000000) * 0.10;
		
	} else if (ti <= 18000000){
		it = 750000 + (ti - 10000000) * 0.15;
		
	} else {
			it = 1950000 + (ti - 18000000) * 0.20;
		
	}

	printf ("Income tax= %ld\n", it);
	

				
				
			
					
				
}
