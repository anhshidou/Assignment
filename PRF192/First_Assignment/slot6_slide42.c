#include <stdio.h>

int main(){
	double PI = 3.14;
	double radius;
	printf ("Enter radius: ");
	scanf ("%lf", &radius);
	printf ("The area of your circle is: %lf\n", PI * radius * radius); 
}
