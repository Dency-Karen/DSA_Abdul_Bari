#include<stdio.h>
//combination formula
int fact(int n)
{
    if (n==0)
        return 1;
    return n*fact(n-1);
}
int combi_fact(int n,int r)//using factorial
{
    int num,den=1;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
int combi_paschal(int n,int r)//using paschals triangle
{
    if(r==0 || r==n)
        return 1;
    else
        return combi_paschal(n-1,r-1) + combi_paschal(n-1,r);
}
int main()
{
    printf("%d \n",combi_fact(5,3));
    printf("%d",combi_paschal(5,3));
    return 0;
}