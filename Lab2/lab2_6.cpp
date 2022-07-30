//Q.no. 6:Write a program in C to implement Boolean matrix operation such as join, product
#include<stdio.h>
#define N 2

void printMatrix(int m[][N]){
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}

void join(int m1[][N], int m2[][N]){
	int m3[N][N];
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++){
			if(m1[i][j]==1 || m2[i][j]==1)
				m3[i][j]=1;
			else
				m3[i][j]=0;
		}
	}
	printMatrix(m3);
} 
void product(int m1[][N], int m2[][N]){
	int m3[N][N];
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++){
			if(m1[i][j]==1 && m2[i][j]==1)
				m3[i][j]=1;
			else
				m3[i][j]=0;
		}
	}
	printMatrix(m3);
}

int main(){
	int m1[N][N]={{1, 0}, {1, 1}};
	int m2[N][N]={{0, 1}, {1, 1}};
	printf("matrix A is\n");
	printMatrix(m1);
	printf("matrix B is\n");
	printMatrix(m2);
	printf("AvB is\n");
	join(m1,m2);
	printf("A^B is\n");
	product(m1,m2);
	
}
