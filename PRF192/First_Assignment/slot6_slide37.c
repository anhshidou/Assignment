#include <stdio.h>

int main(){
	int i, value, total = 0;
	for (i = 0; i < 10; i++){
		printf ("Enter an integer (0 to stop): ");
		scanf("%d", &value);
		if (value == 0)
		break;
		else
		total += value;
	}
	printf ("The total entered is %d\n", total);
}
