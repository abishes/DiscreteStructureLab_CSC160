//Q.no 8: WAP to implement modular exponentiation algorithm
#include <stdio.h>
int modularExponentiation(int b,int n,int M){
	int i,x,power;
	x=1;
	power=b%M;
	while(n>0){
	if(n%2==1)
		x=(x*power)%M;
	power=(power*power)%M;
	n=n/2;
	}
	return x;
}
int main() {
int b,n,M;
b=12,n=3001,M=5;
printf("%d^%d mod %d=%d",b,n,M, modularExponentiation(b,n,M));
return 0;
}

