#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
float x,y;
int k1,k2,k3;
printf("\n������ �������� x � y:\n");
scanf("%f %f",&x,&y);
k1=(y<=x+1)&&(y<=-x+1)&&(y>=x-1);
k2=(x<0)&&(y<0);
k3=(!k1)||(k2);
if(k3==0)printf("\n��窠 �������� � �����客����� �������");
else printf("\n��窠 �� �������� � �����客����� �������");
getchar();
getchar();}