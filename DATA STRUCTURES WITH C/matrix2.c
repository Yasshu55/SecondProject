//reading and printing the transpose of a matrix
#include<stdio.h>
void main()
{
int i,j,m,n,a[10][10];
printf("enter the rows and columns of A matrix\n");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("enter the elements of a matrix\n");
scanf("%d",&a[i][j]);
}
}
printf("Matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}
printf("Transpose of a Matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%5d",a[j][i]);
}
printf("\n");
}
}