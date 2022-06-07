#include<iostream>
#include<stdio.h>
#include<stdlib.h>
void he();

int main()
{
    int i=0;
    int a[]={1,2,3,4,5};
    int *p=new int[5];
    for (i=0;i<5;i++)
        p[i]=i+1;
    std::cout<<"heap array "<<p[3];
    delete [] p;
    he();
    return 0;
}    
void he()
{
    printf("\n");
    int *p,*q;int i=0;
    p=(int *)malloc(3*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    q=(int *)malloc(5*sizeof(int));
    for(i=0;i<3;i++);
        q[i]=p[i];
    free(p);
     q[3]=4;
    q[4]=5;
    p=q;
    printf("%d",p[4]);
    free(q);
   


}