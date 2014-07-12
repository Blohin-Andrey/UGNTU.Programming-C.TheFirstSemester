#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
float xn,xk,dx,et,ef,R,F,S,y,x;
int n,i;
clrscr();
printf("\nВведите пожалуйста:\nxn-начальное икс(где x>1,x<-1)\nxk-конечное икс\ndx-шаг\nn-число членов\n");
scanf("%f %f %f %i",&xn,&xk,&dx,&n);
printf("| x  |   y    |   S    |    et    |    ef    | i |");
for(x=xn;x<=xk+1e-7;x+=dx){
	S=1/x;F=1/x;i=1;
	while(i<=n){
		R=(2*i-1)/(x*x*(2*i+1));
		F=F*R;
		S=S+F;
		i=i+1;
		et=fabs(F/S);}
	y=0.5*log((x+1)/(x-1));
	ef=fabs((S-y)/S);
	printf("\n|%4.2f|%7.6f|%7.6f|%9.8f|%9.8f|%3d|",x,y,S,et,ef,n);
}
getchar();getchar();}
