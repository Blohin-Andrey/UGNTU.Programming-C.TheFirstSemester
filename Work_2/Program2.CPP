#include<math.h>
#include<stdio.h>
void main(){
float P,z,S;
int i,n,K;
printf("\nВведите пожалуйста n и P\n");
scanf("%d %P",&n,&P);
K=0;
for(i=1;i<=n;i++)
{
K=K+(P+i);
S=P+K;
printf("\ni=%d \nS=%f",i,S);
}
z=(n+1)*(2*P+n)/2;
printf("\nz=%f",z);
getchar();
getchar();
getchar();
}