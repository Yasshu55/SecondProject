// transpse of a sparsematrix
#include<stdio.h>
void main()
{
int b[30][30],c[30][30],k,i,j,n;
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
k=1;
}
for(i=0;i<=n;i++)
{
for(j=0;j<3;j++)
{
printf("%d",b[i][j]);
c[0][0]=b[0][1];
c[0][1]=b[0][0];
c[0][2]=b[0][2];
if(n>0)
{
for(i=0;i<b[0][1];i++)
{
for(j=0;j<n;j++)
{
if(b[j][1]==i)
{
c[k][0]=b[j][1];
c[k][1]=b[j][0];
c[k][2]=b[j][2];
k++;
}
}
}
for(i=0;i<b[0][1];i++)
{
for(j=0;j<3;j++)
{
printf("%d",c[i][j]);
printf("\t");
}
printf("\n\n");
}
}
}
}
}
