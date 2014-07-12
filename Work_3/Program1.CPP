#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
float x,y;
printf("\nВведите пожалуйста x и y:\n");
scanf("%f %f",&x,&y);
if(x>=0)
	if(y<=-x+1)
		if(y>=x-1)
		printf("\nТочка попадает в заштрихованную область");
		else printf("\nТочка не попадает в заштрихованную область");
	else printf("\nТочка не попадает в заштрихованную область");
else
if(y<=x+1)
	if(y>=0)
	printf("\nТочка попадает в заштрихованную область");
	else printf("\nТочка не попадает в заштрихованную область");
else printf("\nТочка не попадает в заштрихованную область");
getchar();
getchar();}
