// Q.no. 1: Write a C program to find union, intersection, difference and Cartesian product of two sets
#include <stdio.h>
#define N 10
void makeSet(int set[], int size);
void displaySet(int set[], int size);
int intersection(int set1[], int size1, int set2[], int size2, int operation[]);
int Union(int set1[], int size1, int set2[], int size2, int operation[]);
int difference(int set1[], int size1, int set2[], int size2, int operation[]);
void cartesianProduct(int set1[], int size1, int set2[], int size2);
int isX_InSet(int set[],int size, int x);
int main(){
	int set1[N], set2[N], operation[N];
	int size1, size2, size3;
	printf("size of set1: ");
	scanf("%d", &size1);
	printf("size of set2: ");
	scanf("%d", &size2);
	makeSet(set1, size1);
	makeSet(set2, size2);
	printf("\nUnion\n");
	size3 = Union(set1, size1, set2, size2, operation);
	displaySet(operation, size3);
	printf("\nIntersection\n");
	size3 = intersection(set1, size1, set2, size2, operation);
	displaySet(operation, size3);
	printf("\nDifference\n");
	size3 = difference(set1, size1, set2, size2, operation);
	displaySet(operation, size3);
	printf("\nCartesian Product\n");
	cartesianProduct(set1, size1, set2, size2);
}
void makeSet(int set[], int size){
	printf("Enter %d elements\n", size);
	for(int i = 0; i < size; i++)
		scanf("%d", &set[i]);
}

int isX_InSet(int set[],int size, int x){
	for(int i = 0; i< size; i++){
		if(set[i]==x)
			return 1;
	}
	return 0;
}

int Union(int set1[], int size1, int set2[], int size2, int operation[]){
	int k = 0;
	for(int i =0; i< size1; i++)
		operation[i]=set1[i];
	for(int i =0; i<size2; i++){
		if(!isX_InSet(operation, size2, set2[i])){
			k++;
			operation[(size1-1) + k] = set2[i];
		}
	}
	return (size1 + k);
}

int intersection(int set1[], int size1, int set2[], int size2, int operation[]){
	int k=0;
	for(int i = 0; i < size1; i++){
		for(int j=0; j< size2; j++){
			if(set1[i]==set2[j]){
				operation[k]=set1[i];
				k++;
			}
		}
	}
	return k;
}

int difference(int set1[], int size1, int set2[], int size2, int operation[]){
	int k=0;
	for(int i =0; i< size1; i++){
		if(!isX_InSet(set2,size2,set1[i])){
			operation[k]=set1[i];
			k++;
		}
	}
	return k;
}

void cartesianProduct(int set1[], int size1, int set2[], int size2){
	printf("{");
	for(int i = 0; i < size1; i++){
		for(int j = 0; j < size2; j++){
			printf("(%d, %d) ",set1[i], set2[j]);
		}
	}
	printf("}");
}

void displaySet(int set[], int size){
	printf("{");
	for(int i = 0; i < size; i++)
		printf("%d ",set[i]);
	printf("}");
}

