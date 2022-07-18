#include<stdio.h>

struct matrix
{
    int a[10];
    int n;
};

void set(struct matrix *m,int i,int j,int x)
{
    if(i==j)
        m->a[i-1]=x;
    


}
int get(struct matrix *m,int i,int j)
{
    if(i==j)
        return m->a[i-1];
    else 
        return 0;
        
}
void display(struct matrix m)
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d ",m.a[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct matrix m;
    m.n=4;
    set(&m,2,2,10);
    int x=get(&m,2,2);
    printf("%d\n",x);
    display(m);
    
    return 0;
}