#include<
using namespace as std;
class Diagonal
{
    private:    int n;
                int *a;
    public:     
                Diagonal(int a*,int n)
                {
                    this->n=n;
                    a=new int[n];
                }
                void set(int i,int j,int x);
                int get(int i ,int j);
                void display();
                ~Diagonal();

};
void Diagonal:: set(int i,int j,int x )
{
    if(i==j)
        a[i-1]=x;
}
int Diagonal:: get(int i,int j)
{
    if(i==j)
        return a[i-1];
    else 
        return 0;
}
void Diagonal::display()
{
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   if(i==j)
            printf("%d ",a[i;])
        }
        printf("\n");
    }
}