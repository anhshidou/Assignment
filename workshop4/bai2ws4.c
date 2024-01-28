#include <stdio.h>
#include <math.h>

int choices(){
	int choice;
	printf ("\n=======MENU========\n");
	printf ("\n| 1. Process Fibo number.            Press: 1 |");
	printf ("\n| 2. Print date                      Press 2 |");
	printf ("\n| 3. Exit the program                Press: 3 |");
	printf ("\n===================\n");
	printf ("\nEnter your choice: ");
	scanf ("%d%*c", &choice);
	return choice;
}

void fibo(){
	int n, i = 1;
	printf ("\nEnter a positive integral number: ");
	do {
		scanf ("%d", &n);
	}
	while (n < 1);
	printf ("\nThe first %d Fibonacci numbers: ", n);
	int t1 = 0, t2 = 1, f = 0;
	for (i = 0; i < n; i++){
		printf ("%d ", f);
		t1 = t2;
		t2 = f;
		f = t1 + t2;
	}
	printf("\n");
}

int validdate(int d, int m, int y){
	int maxd = 31;
	if ((d < 1) || (d > 31) || (m < 1) || (m > 12))
	return 0;
	if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
	maxd = 30;
	else if (m == 2) {
		if ((y % 400 == 0) || ((y % 4 == 0) && (y%100 != 0)))
		maxd = 29;
		else
		maxd = 28;
	}  
	return d <= maxd;
	
}
void date(){
	int d, m, y, s;
	printf ("\nEnter day, month, year: ");
	scanf ("%d%d%d", &d, &m, &y);
	s = validdate(d,m,y);
	if (s == 1){
	printf ("\nValid date");
	} else{
		printf ("\nInvalid date");
	}
	
}

int main(){
	int userchoice;
	do {
		userchoice = choices();
		switch(userchoice){
			case 1: 
			fibo();
			break;
			case 2: 
			date();
			break;
			default: 
			printf ("\nGood bye!");
		}
	}
	while (userchoice >0 && userchoice <3);
	return 0;
}

