#include <stdio.h>

int main(){
	int i, j, k, n = 0;
	for (i = 0; i < n; i++){
		for (j=0; j < n; j++){
			for (k = 0; k < n; k++){
				if ( i * j * k != 0){
					printf (" %4d", i*j*k);
					
				} else {
					printf (" ");
				}
				printf ("\n");
			}
			printf ("\n");
		}
		printf ("\n");
	}
	printf ("That's all folks!!!\n");
}

