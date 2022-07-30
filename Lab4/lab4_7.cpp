//Q.No. 7:Write a program to generate permutations and combinations.
#include<stdio.h>
int fact(int x){
	if(x==0)
		return 1;
	else
		return x*fact(x-1);
}
int permu(int n, int r){
	return fact(n)/fact(r);
}
int comb(int n, int r){
	return fact(n)/(fact(n-r)*fact(r));
}

int main(){
	printf("P(10,5)= %d\n",permu(10,5));
	printf("C(10,5)= %d\n",comb(10,5));
	printf("P(8,6)= %d\n",permu(8,6));
	printf("C(8,6)= %d\n",comb(8,6));
	return 0;
}
