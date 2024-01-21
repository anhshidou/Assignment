#include <stdio.h>

int getrelpos(){
	double x, y, r;
	double d2 = x*x + y*y;
	double r2 = r*r;
	if (d2<r2){
	return 1;
} else if (d2==r2){
	return -1;
}
}
int main(){
	double x, y, r;
	int result;
	printf ("Enter value x: ");
	scanf ("%d", &x);
	printf ("Enter value y: ");
	scanf ("%d", &y);
	printf ("Enter the radius of the circle: ");
	do{
		scanf ("%d", &r);
	}
	while (r<0);
	result = getrelpos(x, y, r);
	if (result == 1){
		printf ("The point is in circle");
	}
		else if (result == 0){
			printf ("The point is on the circle");
			
		} else {
			printf ("The point is outside the circle");
		}
		return 0;
	
	
	
	
	
	
	}

