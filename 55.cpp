#include<iostream>
using namespace std;
int main()
{
	int a[5]={2,-3,4,-1,8};
	for(int i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			a[i]=a[i]*(-1);
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
