//Q.no 5: WAP to implement linear search using a recursive function.
#include <stdio.h>
#define N 10
int arr[]={1,20,55,65,67,89,22,12,10,90};
int linearSearch(int i,int key){
	if(key==arr[i])
		return i;
	else if(i==N)
		return -1;
	else
		return linearSearch(i+1,key);
}
int main(){
	int i=0,key=90;
	for(int k =0; k<sizeof(arr)/sizeof(arr[0]); k++)
		printf("%d ", arr[k]);
	int pos= linearSearch(i,key);
	if(pos!=-1)
	printf("\nKey '%d' found at position = %d",key ,pos+1);
	else
	printf("\nKey '%d' not found",key);
}
