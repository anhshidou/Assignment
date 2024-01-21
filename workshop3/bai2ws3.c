#include <stdio.h>

int main(){
	int d, m, y;
	int maxd = 31;
	printf ("Enter day: ");
	scanf ("%d", &d);
	printf ("Enter month: ");
	scanf ("%d", &m);
	printf ("Enter Year: ");
	scanf ("%d", &y);
	if (d<1 || d>31 || m<1 || m>12)
	return 0;
	if (m==4 || m==6 || m==9 || m==11){
		maxd = 30;
	} else if (m==2){
		if ((y%400 == 0) || ((y%4 == 0) && (y %100 != 0))){
			maxd = 29;
		} else {
			maxd = 28;
		}
	} if (d <= maxd){
		printf ("Valid date");
	} else {
		printf ("Invalid date");
	}
	
}
