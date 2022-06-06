#include <iostream>

int main()
{
	int array1[5]={1,2,3,4,5};
	int target=0;
	int ind1=-1;
	int ind2=-1;
	int a=0;


	std::cout<<"Enter the target value";
	std::cin>>target;

	while(a<5)
	{

		for(int j=a+1;j<5;j++)
		{
			if(array1[j]+array1[a]==target)
			{
				ind1=a;
				ind2=j;
				break;
			}
		}


		++a;
	}
	if(( ind1==-1 )&& (ind2==-2))
		std::cout>>array1;
	else
		std::cout<<ind1<<"and"<<ind2;
	return 0;
}
