#include <iostream>
#include<stdio.h>
template <class T>
class rect{
    public:
     T len;
     T bre;

    rect(int l,int b){
        len=l;
        bre=b;
    }
    T area(){
        return len*bre;
    }
    T peri(){
        return 2*(len+bre);
    }
};
int main()
    {
    
        rect<int> r(5,10);
       
        printf("the area and perimeter of the rectangle is %d\n and %d",r.area(),r.peri());
        return 0;
    }