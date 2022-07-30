//Q.no. 4: Write a C program to implement fuzzy set operation. 
#include<stdio.h>
float Union(float a, float b){
	return a>b ? a:b;
}
float Intersection(float a, float b){
	return a<b ? a:b;
}
float Complement(float a){
	return 1-a;
}

int main(){
	printf("Union\n");
	printf("x\ty\tmax(x,y)\n");
	for(int x=0;x <= 1;x++)
		for(int y=0; y<=1; y++)
			printf("%.1f\t%.1f\t%.1f\n",(float)x, (float)y, Union(x,y));
	printf("%.1f\t%.1f\t%.1f\n",0.2,0.5,Union(0.2,0.5));
	printf("%.1f\t%.1f\t%.1f\n",0.6,0.3,Union(0.6,0.3));
	
	printf("Intersection\n");
	printf("x\ty\tmin(x,y)\n");
	for(int x=0;x <= 1;x++)
		for(int y=0; y<=1; y++)
			printf("%.1f\t%.1f\t%.1f\n",(float)x, (float)y, Intersection(x,y));
	printf("%.1f\t%.1f\t%.1f\n",0.2,0.5,Intersection(0.2,0.5));
	printf("%.1f\t%.1f\t%.1f\n",0.6,0.3,Intersection(0.6,0.3));
	
	printf("Complement\n");
	printf("x\t(1-x)\n");
	for(int x=0;x <= 1;x++)
		printf("%.1f\t%.1f\n",(float)x, Complement(x));
	printf("%.1f\t%.1f\n",0.2, Complement(0.2));
	printf("%.1f\t%.1f\n",0.6, Complement(0.6));
	return 0;
}
