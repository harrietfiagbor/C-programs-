
#include<stdio.h>
/*this is 2-dimensional array program explaining how to 
find determinant of a 3x3 matrix , the cofactors and the transpose*/
main()
{
	int a[3][3], c[3][3],adj[3][3],i, j, m, n, det=0;//m for rows and n for columns, a[row][column]
	printf("enter the number of rows:\t");
	scanf("%d",&m);
	printf("enter the number of columns:\t");
	scanf("%d",&n);
	for(i=0;i<m;i++)    //i and j also represent the index for row and column respectively
	for(j=0; j<n; j++)
	{
		printf("\n enter the element a[%d][%d]: ", i,j);
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("\t%d",a[i][j]);         // all these will just display the matrix
	}
	i=0;
	for(j=0;j<n;j++)
	det = det + a[i][j] * ( a[i+1][(j+1)%3]  *  a[i+2][(j+2)%3]	- a[i+1][(j+2)%3] * a[i+2][(j+1)%3] );   //finding the determinant
	 printf("\nthe determinant is %d",det);           //displaying determinant
	

	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	 c[i][j]=  a[(i+1)%3][(j+1)%3]  *  a[(i+2)%3][(j+2)%3]	- a[(i+1)%3][(j+2)%3] * a[(i+2)%3][(j+1)%3] ;       //finding the cofactors
	 printf("\nthe matrix of cofactors:");
	 for(i=0;i<m;i++)
	 {
	 	printf("\n");
	 	for(j=0;j<n;j++) 	
	 	printf("\t%d",c[i][j]);
	 }
	
	 printf("\nthe transpose of the matrix of cofactors: ADJOINT");
	 for(j=0;j<m;j++)           //transposing the matrix will let the column become the row and the row become the column
	{
         printf("\n");
	   for(i=0;i<n;i++)
	   printf("\t%d",c[i][j]);
	   
    }
}
