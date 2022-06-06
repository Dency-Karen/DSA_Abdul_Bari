//Taylor Series using Static variables
#include<stdio.h>
double e_h(int x, int n);
double e_h_l(int x, int n);
double e(int x, int n)
{
 static double p=1,f=1;
 double r;

 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 
 return r+p/f;
}
int main()
{
 printf("%lf \n",e(1,10));
printf("%lf \n",e_h(1,10));
printf("%lf \n",e_h_l(1,10));
 return 0;
}
//Taylors series(best case-horners rule)
double e_h(int x, int n)
{
 static double s=1;
 

 if(n==0)
    return s;

 s=1 + x*s/n;
 return e_h(x,n-1);

}
//Taylors series(best case(iterative)-horners rule)
double e_h_l(int x, int n)
{
 static double s=1;
 
   while(n>0)
   {
      s=1+x*s/n;
      n--;
   }
   return s;

}
