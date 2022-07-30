//Q.no 2: WAP to implement disjunction operation.
#include <stdio.h>
int disjunction(int x, int y){
if(x==1 || y==1)
return 1;
else
return 0;
}
int main(){
int a,b;
printf("A\tB\tAvB\n");
for(a=0;a<=1;a++){
for(b=0;b<=1;b++){
printf("%d\t%d\t%d\n",a,b,disjunction(a,b));
}
}
}

