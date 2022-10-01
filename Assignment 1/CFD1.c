#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    double u[40][20],error=0,store[40][20];
    int i,j;

    for(i=0;i<21;i++)
    {
    u[0][i]=100;
    store[0][i]=100;
    }

    for(j=1;j<41;j++)
    {
        for(i=0;i<21;i++)
        {
            u[j][i]=0;
            store[j][i]=0;

        }
    }
    do
{
    error=0;
    for(j=1;j<40;j++)
    {

       for(i=1;i<20;i++)
       {
           u[j][i]=(u[j+1][i]+u[j-1][i]+u[j][i+1]+u[j][i-1])*0.25;
          error=error+fabs(u[j][i]-store[j][i]);
          store[j][i]=u[j][i];
       }
    }
}while(error>.01);
    printf("\nthe error is =%f",error);
    printf("\n the solutions are\n");
    for(j=0;j<41;j++)
    {
        for(i=0;i<21;i++)
        {
            printf("%d\t%d\t%f\n",j+1,i+1,u[j][i]);
        }
        printf("\n");
    }
}
