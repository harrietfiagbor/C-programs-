//this is a program for multiplication of matrices
#include<stdio.h>
#include<conio.h>
main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,m,n;
printf("enter the number of rows:\t");
scanf("%d",&m);
printf("enter the number of columns:\t");
scanf("%d",&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{ 
	printf("enter the element for the matrix A[%d][%d]:",i,j);
	scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
	printf("enter the element for the matrix B[%d][%d]:", i, j);
	scanf("%d",&b[i][j]);
}	
printf("the elements of matrix A:\n");
for(i=0;i<m;i++)
{
	printf("\n");
	for(j=0;j<n;j++)
	
	printf("\t%d",a[i][j]);
}
printf("\nthe elements of matrix B:\n");
for (i=0;i<m;i++)
{
		printf("\n"); 
		for(j=0;j<n;j++)
		printf("\t%d",b[i][j]);
}
getch();
printf("\nthe matrix multiplication:\n ");
for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 c[i][j]=0;
 for (i=0;i<m;i++)
 {
	for(j=0;j<n;j++)
		for(k=0;k<m;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
 }
 for (i=0;i<m;i++)
{
		printf("\n");
		for(j=0;j<n;j++)
		printf("\t%d",c[i][j]);
}
}


