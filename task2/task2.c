#include <stdio.h>
#include <stdlib.h>

#define ops 5

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exitProgram();

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int (*p_ops[ops])(int, int) = {add, subtract, multiply, divide, exitProgram};

	int input;
	int a = 6;
	int b = 3;
	int result;

	printf("Operand ‘a’ : 6 | Operand ‘b’ : 3\n");
	printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
	scanf("%d", &input);
	result = p_ops[input](a, b);
		printf("x = %d\n", result);

	return 0;
	
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
	printf ("Adding 'a' and 'b'\n");
	return a + b;
}

int subtract (int a, int b) { 
	printf ("Subtracting 'b' from 'a'\n");
	return a - b;
}

int multiply (int a, int b) { 
	printf ("Multiplying 'a' and 'b'\n");
	return a * b;
}

int divide (int a, int b) { 
	printf ("Dividing 'a' by 'b'\n");
	return a / b;
}

int exitProgram() {
	printf("Exiting program\n");
	exit(0);
}

