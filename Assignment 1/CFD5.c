#include<stdio.h>
#include<math.h>
int main()
{

float pi=3.1416,X,Y,sum;
float T[41][21];
int n,i,j;
for(i=0;i<41;i++)
{
for(j=0;j<21;j++)
{
if(i==0)
T[i][j]=100;
else
T[i][j]=0;
}
}

for(i=1;i<40;i++)
{
for(j=1;j<20;j++)
{
X=i*0.05;
Y=j*0.05;
sum=0;
for(n=1;n<=110;n++)
{
sum=sum+((1-(pow(-1,n)))/(n*pi))*sinh((n*pi*(2-X))/1)*sin(n*pi*Y/1)/sinh(n*pi*2/1);
}
T[i][j]=100*2*sum;
}
}
for(i=2;i<41;i++)
{
for(j=2;j<21;j++)
{
printf("T[%d][%d]=%f\t",i,j,T[i][j]);
printf("\n");
}

}
}
