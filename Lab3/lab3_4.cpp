//Q.no 4: WAP to implement biconditional operation.
#include <stdio.h>
int biconditional(int x, int y){
	if(x==y)
		return 1;
	else
		return 0;
}

int main(){
	int a,b;
	printf("a\tb\ta<->b\n");
	for(a=0;a<=1;a++){
		for(b=0;b<=1;b++){
			printf("%d\t%d\t%d\n",a,b,biconditional(a,b));
		}
	}
	return 0;
}
