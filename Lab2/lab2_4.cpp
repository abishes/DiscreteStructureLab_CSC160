//Q.no 8: WAP to find gcd of two numbers using prime factorisation method
#include <stdio.h>
int gcdPrimeFactor(int a, int b){
	int i=2,gcd=1;
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0){
			gcd*=i;
			a/=i;
			b/=i;
		}
		else
			i++;
	}
	return gcd;
}
int main(){
	printf("gcd(8, 48) is %d",gcdPrimeFactor(8,48));
	return 0;
}

