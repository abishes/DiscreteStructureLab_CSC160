//Q.no. 3:Write a C program to find ceiling and floor value of the variable or expression.
#include <stdio.h>
int Floor(float x){
	return (int)x;
}
int Ceiling(float x){
	if(x<0){
		x = -x;
		if(x-(int)x > 0)
			return -(x+1);
		else
			return -x;
	}
	else{
		if(x-(int)x > 0)
			return (x+1);
		else
			return x;
	}
}
int main(){
	printf("Floor(%.2f)=%d\n",36.67, Floor(36.67f));
	printf("Ceiling(%.2f)=%d\n",36.67, Ceiling(36.67));
	printf("Ceiling(%d)=%d\n",36, Ceiling(36));
	printf("Ceiling(%.2f)=%d\n",-36.67, Ceiling(-36.67));
	return 0;
}
