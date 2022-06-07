#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **p;// 2d array using double pointer
    int i,j=0;
    p=(int **)malloc(3*sizeof(int *));
    p[0]=(int *)malloc(4*sizeof(int));
    p[1]=(int *)malloc(4*sizeof(int));
    p[2]=(int *)malloc(4*sizeof(int));

    for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }



}