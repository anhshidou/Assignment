#include <stdio.h>

int main(){
	int mark;
	int noOfShirts;
	int reward;
	printf ("Enter your mark: ");
	scanf ("%d", &mark);
	if (mark > 7){
		reward = 5000000;
		noOfShirts = 2;
	} else {
		reward = 0;
		noOfShirts = 0;
	}
	printf ("Reward:%d, noOfShirts:%d", reward, noOfShirts);
	
}
