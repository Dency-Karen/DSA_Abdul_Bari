#include<stdio.h>
struct rect{
    int l;
    int b;
};
int area(struct rect r)
{
    return r.l*r.b;
}
int perimeter(struct rect r)
{
    return 2*(r.l+r.b);
}
void initialize(struct rect *r,int l1,int b1) 
{
    r->l=l1;
    r->b=b1;
}

int main()

{   
    int l2=0;int b2=0;int a=0;int p=0;
    struct rect r;
    printf("Enter the length and breadth of the rectangle");
    scanf("%d",&l2);
    scanf("%d",&b2);
    initialize(&r,l2,b2);
    a=area(r);
    p=perimeter(r);
    
    printf("The area of the rectangle is %d\n",a);
    printf("The perimeter of the rectangle is %d",p);
}
