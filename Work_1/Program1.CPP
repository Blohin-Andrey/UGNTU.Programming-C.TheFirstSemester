#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,d,x1,x2;
	printf("������ ����業�� a,b,c");  scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if (d<0) 		printf("��� �襭��");
		else
			if (d>0){
				printf("2�襭��");
				x1=(-b+sqrt(d))/2*a;
				x2=(-b-sqrt(d))/2*a;
				printf("x1= %f x2= %f",x1,x2);
		 }
		 else{
			printf("1�襭��");
			x1=-b/2*a; printf("/n x= %f",x1);
		}
getchar();
getchar();
}