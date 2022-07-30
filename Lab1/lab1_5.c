//Q.no. 5: Write a C program to generate different sequences.
#include <stdio.h>
#include<math.h>
void sequence1(int a){
	int commonDiff= 6;
	for(int i = 0; i< 10; i++){
		printf("%d , ", a + i*commonDiff);
	}
	printf("...\n");
}
void sequence2(int a){
	int commonRatio = 2;
	for(int i =0; i< 10; i++)
		printf("%d , ", a * (int)round(pow(commonRatio, i)));
	printf("...\n");
}
int main(){
	printf("Sqeuence1 = ");
	sequence1(5);
	printf("Sequence2 = ");
	sequence2(5);
	return 0;
}
