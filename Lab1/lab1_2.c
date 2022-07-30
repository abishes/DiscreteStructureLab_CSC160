//Q.no. 2: Write a C program to find union, intersection, difference, complement of two sets using bit string
//Natrual numbers
#include <stdio.h>
#define N 10
int Ustring[N]={1,1,1,1,1,1,1,1,1,1};
void setBitString(int set[], int size, int setString[]);
void Union(int set1String[], int set2String[]);
void Intersection(int set1String[], int set2String[]);
void Difference(int set1String[], int set2String[]);
void Complement(int set1String[]);
void printBitString(int setString[]);
void printSet(int setString[]);
int main(){
	int set1[]={1, 2, 3, 4, 5, 9};
	int set2[]={2, 4, 5, 6, 7, 8, 9};
	int set1String[N],set2String[N];
	setBitString(set1, sizeof(set1)/sizeof(int), set1String);
	setBitString(set2, sizeof(set2)/sizeof(int), set2String);
	printf("Bit String of set1\n");
	printBitString(set1String);
	printf("Bit String of set2\n");
	printBitString(set2String);
	Union(set1String, set2String);
	Intersection(set1String, set2String);
	Difference(set1String, set2String);
	Complement(set1String);
	return 0;
}
void setBitString(int set[],int size, int setString[]){
	for(int i=0; i<N; i++)
		setString[i]=0;
	for(int i=0; i< size; i++)
		setString[set[i] - 1] = 1;
}
void printBitString(int setString[]){
	for(int i =0; i< N;i++)
		printf("%d ", setString[i]);
	printf("\n");
}

void printSet(int setString[]){
	printf("{");
	for(int i=0; i< N ; i++){
		if(setString[i] == 1)
			printf("%d ",(i + 1));
	}
	printf("}\n");
}
void Union(int set1String[], int set2String[]){
	int UnionString[N];
	for(int i=0; i< N; i++){
		if(set1String[i] == 1 || set2String[i]==1)
			UnionString[i] = 1;
		else
			UnionString[i] = 0;
	}
	printf("The union Bit String is\n");
	printBitString(UnionString);
	printf("Union is\n");
	printSet(UnionString);
}
void Intersection(int set1String[], int set2String[]){
	int IntersectionString[N];
	for(int i=0; i< N; i++){
		if(set1String[i] == 1 && set2String[i]==1)
			IntersectionString[i] = 1;
		else
			IntersectionString[i] = 0;
	}
	printf("The intersection Bit String is\n");
	printBitString(IntersectionString);
	printf("Intersection is\n");
	printSet(IntersectionString);
}

void Difference(int set1String[], int set2String[]){
	int DifferenceString[N];
	for(int i=0; i< N; i++){
		if(set1String[i] == 1 && set2String[i]==1)
			DifferenceString[i] = 0;
		else if(set1String[i]==1 && set2String[i]==0)
			DifferenceString[i]=1;
		else
			DifferenceString[i] = 0;
	}
	printf("The difference Bit String is\n");
	printBitString(DifferenceString);
	printf("Difference is\n");
	printSet(DifferenceString);
}

void Complement(int setString[]){
	int ComplementString[N];
	for(int i=0; i<N; i++){
		if(setString[i]==1)
			ComplementString[i]=0;
		else
			ComplementString[i]=1;
	}
	printf("The complement Bit String of set1 is\n");
	printBitString(ComplementString);
	printf("Complement is\n");
	printSet(ComplementString);
}
