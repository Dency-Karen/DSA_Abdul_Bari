#include<stdio.h>
void toh(int n,int a ,int b ,int c)
{
    if(n==1)
    printf("(%d ,%d)",a,c);
    else
    {
    
        toh(n-1,a,c,b);
        printf("(%d ,%d)",a,c);
        toh(n-1,b,a,c);
    }
}
int main()
{
    toh(3,1,2,3);
}



