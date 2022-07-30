//Q.no 5 Wrice a program in C to implement Fremat's little theorm.
#include <stdio.h>
#include <math.h>
int primeTest(int a, int n){
	int r=pow(a,n-1);
	if (r%n==1)
		return 1;
	else
	return 0;
}
int main(){
	int a=22,n=3; //Here, for a not multiple of n, if a^n-1%n=1, then n is prime, otherwise not prime
	if(primeTest(a,n)==1)
		printf("%d is Prime",n);
	else
		printf("%d is not Prime",n);
	return 0;
}
