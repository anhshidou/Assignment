#include <stdio.h>

int main(){
	double result, num1, num2;
	char op;
printf("Enter number: ");
    scanf("%lf%c%lf", &num1, &op, &num2	);
	switch(op){
	
		case '+':
			result = num1 + num2;
			break;
			case '-':
				result = num1 - num2;
				break;
				case '*':
					result = num1 * num2;
					break;
					case '/': if (num2 == 0){
						printf ("Cannot divided by 0");
					} else {
					
						result = num1 / num2;
						
						break;
					}
					default:
						printf ("Invalid operator\n");
				
				}
					printf ("Result:%lf", result);
				
}
