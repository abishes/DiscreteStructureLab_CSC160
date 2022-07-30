//Q.no 2: WAP to compute the nth fibonacci number using a recursive function.
#include <stdio.h>
int fib(int x){
	if (x<=1)
		return x;
	else
		return fib(x-1) + fib(x-2);
}
int main(){
	printf("6th fibonacchi number is %d",fib(6));
	return 0;
}
