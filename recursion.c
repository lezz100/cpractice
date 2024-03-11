//Fibonacci series 0 1 1 2 3 5...

#include <stdio.h>

int sum(int n);

int main{
	int number, result;

	printf("Please enter a positive number : ");
	scanf("%d\n",&number );

	result = sum(number);

	printf("Sum = %d", result);
	return 0;
}

int sum(int n){
	if (n!= 0){
		//function sum() is calling itself
		return n + sum(n-1);
	}else{
		return n;
	}
}