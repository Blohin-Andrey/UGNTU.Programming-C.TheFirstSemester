#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
float xn,xk,dx,et,ef,R,F,S,y,Sn,Fn,x;
int n,i;
double ez;
clrscr();
printf("\nВведите пожалуйста:\nxn-начальное икс(где x>1,x<-1)\nxk-конечное икс\ndx-шаг\nez-заданая погрешность\n");
scanf("%f %f %f %f",&xn,&xk,&dx,&ez);
printf("| x  |   y    |   S    |    ef    |    et    | i |");
for(x=xn;x<=xk+1e-7;x+=dx){
	S=1/x;F=1/x;i=1;
	do{
		R=(2*i-1)/(x*x*(2*i+1));
		F=F*R;
		S=S+F;
		i=i+1;
		et=fabs(F/S);}
	while(et>ez);
	y=0.5*log((x+1)/(x-1));
	ef=fabs((S-y)/S);
	printf("\n|%4.2f|%7.6f|%7.6f|%9.8f|%9.8f|%3d|",x,y,S,ef,et,n);
}
getchar();getchar();}
