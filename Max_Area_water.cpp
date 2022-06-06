#include <iostream>
#include <cstdlib>
#include<algorithm>
#include<vector>

int area(vector<int>& a,int size)
{	
	int j=0;
	int l=0;
	int b=0;
	int a=0;
	int temp=0;
	
	while(j<size)
	{	
		for(int i=j+1;i<size;i++)
		{	std::cout<<"i,j="<<i<<","<<j<<"\n";
			b=abs(j-i);
			l=std::min((a.at(i)),(a.at(i));
			temp=l*b;
			std::cout<<"len is "<<l<<" b is "<<b<<"area is"<<temp<<"\n";
			if(temp>a)
				a=temp;
		}
		++j;
	}
	std::cout<<"final area is "<<a;
	return a;
}



int main()
{	
	int n=0;
	std::cout<<"Enter the number of elements";
	std::cin>>n;
	vector<int>& a1;
	std::cout<<"Enter the elements of the array";
	for (int i=0;i<n;i++)
		std::cin>>a1.push_back(i);
	int ans=area(a1.begin(),n);
	std::cout<<"Area of water in the Largest Conatiner is"<<ans;
	return 0;
}