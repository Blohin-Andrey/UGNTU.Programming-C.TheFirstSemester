#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
float x,y;
printf("\n������ �������� x � y:\n");
scanf("%f %f",&x,&y);
if(x>=0)
	if(y<=-x+1)
		if(y>=x-1)
		printf("\n��窠 �������� � �����客����� �������");
		else printf("\n��窠 �� �������� � �����客����� �������");
	else printf("\n��窠 �� �������� � �����客����� �������");
else
if(y<=x+1)
	if(y>=0)
	printf("\n��窠 �������� � �����客����� �������");
	else printf("\n��窠 �� �������� � �����客����� �������");
else printf("\n��窠 �� �������� � �����客����� �������");
getchar();
getchar();}
