#include<iostream>//Max sliding window
#include<queue>
using namespace std;
int main()
{
    queue<int> q;//declaring queue
    int a[]={1,2,};//array input
    int k=3;//size of window
    int len=size(a);
    int c,j,sum=0;
    if(k<=len)
    {
        for(int i=0;i<=len-k;i++)
        {
            c=1;
            sum=0;
            j=i;

            while(c<=k)
            {
                sum=sum+a[j];
                c++;
                j++;
            }
            cout<<sum<<"\n";
            q.push(sum);
        }
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            sum=sum+a[i];
        }
        q.push(sum);
    }
    cout<<"[";
    while(!q.empty())
    {
        cout<<q.front();
        if(q.size()>1)
        {
            cout<<" ";
        }
        q.pop();
    }
    cout<<"]";
    return 0;

}