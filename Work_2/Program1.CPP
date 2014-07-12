#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void main(){  // Таблица температур
	float T1,T2,Tn,Tk,dt,koef=1.25; int i,n;
	printf("ввести:\n1)Tn-начальную температу в градусах Реомюра!!!\n2)dt-шаг температуры!!!\n3)n-количество строк!!!\n");
	scanf("%f %f %d",&Tn,&dt,&n);
	printf("Таблица температур");
	printf("\n---------------------------");
	printf("\n|  градус R  |  градус C  |");
	printf("\n---------------------------");
	T1=Tn;
	for( i=0;i<n;i++){
			 T2=T1*koef;
			 printf("\n|%11.3f |%10.3f  |",T1,T2);
			 T1+=dt;
	}
	printf("\n---------------------------");
	getchar(); getchar();
}
