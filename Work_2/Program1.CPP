#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void main(){  // ������ ⥬������
	float T1,T2,Tn,Tk,dt,koef=1.25; int i,n;
	printf("�����:\n1)Tn-��砫��� ⥬����� � �ࠤ��� ������!!!\n2)dt-蠣 ⥬�������!!!\n3)n-������⢮ ��ப!!!\n");
	scanf("%f %f %d",&Tn,&dt,&n);
	printf("������ ⥬������");
	printf("\n---------------------------");
	printf("\n|  �ࠤ�� R  |  �ࠤ�� C  |");
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
