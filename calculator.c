/* Program with basic calculator functions, including power operation
 * Due to the power operation, that uses math lib, I had to specify "-lm" while compiling in GNU/Linux. For example: gcc -o calculator calculator.c -lm */

#include <stdio.h>
#include <math.h>

int main()
{
	double num1, num2, result;
	char op;
	printf("Type the first number\n");
	scanf("%lf", &num1);
	printf("Type an operator\n");
	scanf(" %c", &op); /* To get a char with scanf, a space character is neeeded before %c */
	printf("Type the second number\n");
	scanf("%lf", &num2);
	
	if (op == '+'){
		printf("Result: %.2lf\n",num1 + num2);
	} else if (op == '-') {
		printf("Result: %.2lf\n",num1 - num2);
	} else if (op == '/') {
		printf("Result: %.2lf\n",num1 / num2);
	} else if (op == '*') {
		printf("Result: %.2lf\n",num1 * num2);
	} else if (op == '^') {
		printf("Result: %.2lf\n", pow(num1, num2));
	} else {
		printf("Invalid Operator!\n");
	}
}
