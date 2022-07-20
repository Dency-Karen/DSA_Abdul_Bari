#include<iostream>//remove repeated adjacent letters in a string
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<char> s,s1;

    string str="abbacca";
    string str2="";
    int len=strsize(str);
    for (int i=0;i<len;i++)
    {
        if(s.empty())
        {
            s.push(str[i]);
        }
        else 
        {
            if(s.top()==str[i])
            {
                s.pop();
            }
            else
                s.push(str[i]);
        }
    }
    
    while(s.size()!=0)
    {
        s1.push(s.top());
    
        s.pop();
    }
    while(s1.size()!=0)
    {
        str2.append(s1.top());
        s1.pop();
    }
    cout<<str2;
    /*void printStack(stack<char> &st){
    char var;
    if(!st.empty()){
        var = st.top();
        st.pop();
        printStack(st);
        cout<<var;
    }
    else{
        return;
    }*/
}
