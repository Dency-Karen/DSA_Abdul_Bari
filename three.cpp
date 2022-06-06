#include <iostream>
#include<stdio.h>
class rect{
    public:
     int len;
     int bre;

    rect(int l,int b){
        len=l;
        bre=b;
    }
    int area(){
        return len*bre;
    }
    int peri(){
        return 2*(len+bre);
    }
};
 int main()
    {
        int a=0;int p=0;
        rect r(5,10);
        a=r.area();
        p=r.peri();
        printf("the area and perimeter of the rectangle is %d\n and %d",a,p);
        return 0;
    }