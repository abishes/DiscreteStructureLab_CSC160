//Q.no 1: WAP to 10 random numbers using linear congruential method
#include <stdio.h>
int main(){
	int x0=7,a=3,m=7,c=3;
	int noOfRandomNums=10;
	int randNum;
	for(int i=0;i<noOfRandomNums;i++){
		int temp=(a*x0+c)%m;//Linear Congruential Method Formulae
		printf("%d\n",temp);
		x0=temp;
	}
}

