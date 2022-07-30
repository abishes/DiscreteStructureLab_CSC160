//Q.no 1:WAP to compute the factorial of a number using a recursive function.
#include <stdio.h>
int factorial(int x){
	if(x<=1)
		return 1;
	else
		return x * factorial(x-1);
}
int main(){
	printf("5! = %d", factorial(5));
	return 0;
}
