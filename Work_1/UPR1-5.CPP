#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
main(){
	 float f;
	 long double ld;
	 long l;
	 double d;
	 unsigned un,oct,hex1,hex2,b1;
	 char c1;
	 unsigned char c2='A';
	 int i1,i2,a,b,z,x,y,I;
	clrscr();
	/* ��ࢮ� �ࠦ����� */
	f=3.141592F;		printf("f=%f",f);			// <3.141592F> ����⢥����
	ld=3.14;    		printf("\nld=%Lf",ld);		// <3.14L> ������� ����⢥����
	un=500U;      	printf("\nun=%u",un);		// <500U> 楫�� ����������
	oct=016;       	printf("\noct=%#o",oct);		// <016> ��ᬥ�筮�
	hex1=0x16;    	printf("\nhex=%#x",hex1);	// <0x16> ��⭠����筮� ᮮ�. ����
	hex2=0XFF;   		printf("\nhex2=%#X",hex2); 	// <0XFF> ��⭠����筮� ᮮ�. ����

	/* ��஥ �ࠦ�����  */
	c1='A';	 i1=c1;
	printf("\n\n%d	%c	%u",i1,i1,i1);	// ��� ᨬ����,ᨬ���, �⭨���� �� 65536 ��� ᨬ����
	printf("\n\n%d	%c	%u",c1,c1,c1);	// ��� ᨬ����,ᨬ���, �⭨���� �� 65536 ��� ᨬ������� �������, ������, �������� �� 65536 ��� �������

	i2=c2;
	printf("\n%d	%c	%u\n",i2,i2,i2);	// ��� ᨬ���� � <+> ᨬ��� ��� ᨬ���� <+>
	printf("\n%d	%c	%u",c2,c2,c2); 	// ��� ᨬ���� � <+> ᨬ��� ��� ᨬ���� <+>��� ������� � �+� ������ ��� ������� �+�
	b1=16;
	b1=-b1;
	printf("\nb=%u",b);


	/* ���� �ࠦ����� */
	a=2;b=3;
	printf("\na=%i b=%i",a,b);
	z=a+++--b;		            	printf("\nz=%i",z);  //synt a++--b exempl a+++--b
	z=a++ + ++b;                printf("\nz=%i",z);
	z=a+++b;		              printf("\nz=%i",z);
	z=a++>b;		              printf("\nz=%i",z);
	z=a+++b++;		            printf("\nz=%i",z);

	/* ��⢥�⮥ �ভ���� */
	x=-3*4%-6/5;			printf("\nx=%i",x);
	/* ��⮥ �ࠦ����� */
	I=l=f=d=1000000/3;
	getch();
	getch();
	return 0;
}