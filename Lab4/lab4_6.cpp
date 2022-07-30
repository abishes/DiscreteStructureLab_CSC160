//Q.No. 6: Write a program to implement binary search using recursion
#include<stdio.h>
#define N 10
int arr[N]={2,24,36,48,58,92,97,101,105,150};
int binarySearch(int key,int first, int last){
	int m = (first+last)/2;
	if(key == arr[m])
		return m;
	else if (key > arr[m] && last > m)
		return binarySearch(key,m+1,last);
	else if (key < arr[m] && m > first)
		return binarySearch(key,first,m-1);
	else
		return -1;
}

void print(int key){
	int pos= binarySearch(key,0,10);
	if(pos==-1)
		printf("\nKey %d not found",key);
	else
		printf("\nKey %d found at %d position",key,pos+1);
}

int main(){
	for(int i=0; i<N;i++){
		printf("%d, ", arr[i]);
	}
	print(92);
	print(166);
	return 0;
}
