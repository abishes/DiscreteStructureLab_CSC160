//Q.no. 7: WAP to find gcd of two numbers using euclidean algorithm
#include <stdio.h>
int gcd(int a, int b){
	if(a == 0)
		return b;
	else
		return gcd(b%a, a);
}
int main(){
	printf("gcd(4, 9) is %d", gcd(4, 9));
	return 0;
}
