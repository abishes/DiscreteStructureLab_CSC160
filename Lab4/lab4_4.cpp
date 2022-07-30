//Q.no 4: WAP to compute a product of two using a recursive function.
#include <stdio.h>
int pro(int a,int b){
if(b==1)
return a;
else;
return a+pro(a,b-1);
}
int main(){
printf("5x6 = %d",pro(5, 6));
return 0;
}
