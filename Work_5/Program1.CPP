#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <values.h>
main(){
	void print_mat(int **a,int n,int m);
	void form_mat(int **a,int n,int m);
	void find(int **a,int n);
	void print_mat_adr(int **a,int n,int m);
	int n,i,j,**a;  clrscr();
		printf("\nВведите n=> ");	scanf("%d",&n);
	a=(int **)malloc(n*sizeof(int));
		for (i=0;i<n;i++)
			a[i]=(int *)malloc(n*sizeof(int));
	form_mat(a,n,n);
	print_mat(a,n,n);
	find(a,n);
	print_mat_adr(a,n,n);
		for (i=0;i<n;i++)	  free(a[i]);
	getchar(); getchar();
}
void print_mat(int **a,int n,int m){
	int i,j;
		for (i=0;i<n;i++){
			for (j=0;j<m;j++)
				printf("%5d",a[i][j]);
			printf("\n");
		}
}
void form_mat(int **a,int n,int m){
		int i,j;
			for (i=0;i<n;i++)
				for (j=0;j<m;j++)
				*(*(a+i)+j)=-100+rand()%200;
}
void find(int **a,int n){
	int i,j,c,k=0;
	c=-MAXINT;
		for (i=0;i<n;i++)
			if (!((i+1)%2) && (a[i][i]>c) && !((a[i][i])%2)){
				c=a[i][i];
				k=i+1;
			}
	if (k) printf("\nДиагональный, наибольший среди четных по номеру и величине элементов: a[%d;%d]=%d\n",k,k,c);
		else printf("\nНет элементов \n");
}
void print_mat_adr(int **a,int n,int m){
	int i,j;
	printf("\nАдреса элементов\n");
		for (i=0;i<n;i++){
			for (j=0;j<m;j++)	printf("%10.4p",&a[i][j]);
			printf("\n");
		}
}