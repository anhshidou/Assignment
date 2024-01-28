#include <stdio.h>
#include <math.h>

int choices(){
	int choice;
	printf ("\n=======MENU========\n");
	printf ("\n| 1. Process primes.            Press: 1 |");
	printf ("\n| 2. Print min, max in an integer          Press 2 |");
	printf ("\n| 3. Exit the program           Press: 3|");
	printf ("\n===================\n");
	printf ("\nEnter your choice: ");
	scanf ("%d%*c", &choice);
	return choice;
}

void prime(){
	int n, i, s = 1;
	printf ("\nEnter positive integer: ");
	scanf ("%d", &n);
	int m = sqrt(n);
	for (i=2; i<=m;i++)
		if (n % i == 0)
			s = 0;
		 if (s == 1 && n == 1)
			printf ("The input is not prime\n");
		 else if (n == 0 || n <= 0)
			printf ("\n The input is not a prime\n");
		 else 
			printf ("\nThe input is a prime\n");
		
	
}

void digits(){
	int n;
	printf ("\nEnter integer: ");
	scanf ("%d", &n);
	int max, min;
	max = n % 10;
	min = n % 10;
	while (n > 0){
		int temp = n % 10;
		n /= 10;
		if (max < temp){
			max = temp;
		} if (min > temp){
			min = temp;
		}
	}
	printf ("\nMinimum of digits: %d\n", min);
	printf ("Maximum of digits: %d\n", max);
}

int main(){
	int userchoice;
	do {
		userchoice = choices();
		switch(userchoice){
			case 1: 
			prime();
			break;
			case 2: 
			digits();
			break;
			default: 
			printf ("\nGood bye!");
		}
	}
	while (userchoice >0 && userchoice <3);
	return 0;
}
