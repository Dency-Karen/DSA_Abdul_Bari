#include<stdio.h>
int a[5]={-1,-1,-1,-1,-1};
void fibol(int n);

int  fibor(int n)
{
    

    if (n==0)
    {   a[n]=0;
        
        printf("a[%d] is %d\n",n,a[n]);
        return 0;
    }
        
       
    if (n==1)
    {
       a[n]=1;
       
        printf("a[%d] is %d\n",n,a[n]);
        return 1;
    }
    if (n>1)
    {
        if (a[n-2]==-1) 
            fibor(n-2);
        if (a[n-1]==-1)
            fibor(n-1);
        a[n]=a[n-1]+a[n-2];
        printf("a[%d] is %d\n",n,a[n]);
        return a[n];
    }
    return a[n];

         
}
int main()
{
    

   
    printf("fibor is %d", fibor(5));

    
    


}
void fibol(int n)
{
    int a=0;
    int b=1;int c=0;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        
        a=b;
        b=c;

    }
    printf("%d ",c);
}