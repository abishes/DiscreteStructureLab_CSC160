//Q.no 5: WAP to verify DeMorgan's Law.
#include <stdio.h>
int disjunction(int x, int y){
if(x==1 || y==1)
return 1;
else
return 0;
}
int conjunction(int x, int y){
if(x==1 && y==1)
return 1;
else
return 0;
}
int complement(int x){
if(x==1)
return 0;
else if (x==0)
return 1;
}
int main(){
int a,b;
printf("A\tB\t(A+B)'\tA'.B'\t(A.B)'\tA'+B'\n");
for(a=0;a<=1;a++){
for(b=0;b<=1;b++){
int L1P1=complement(disjunction(a,b));
int L1P2=conjunction(complement(a),complement(b));
int L2P1=complement(conjunction(a,b));
int L2P2=disjunction(complement(a),complement(b));
printf("%d\t%d\t%d\t%d\t%d\t%d\n",a,b,L1P1,L1P2,L2P1,L2P2);
}
}
}
