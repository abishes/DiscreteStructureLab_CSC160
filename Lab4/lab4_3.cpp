//Q.no3: WAP to compute the x^n number using a recursive function.
#include <stdio.h>
int power(int a,int b){
if(b==0)
return 1;
else;
return a*power(a,b-1);
}
int main(){
printf("5^3=%d",power(5,3));
return 0;
}

