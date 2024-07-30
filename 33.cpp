#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int key=2;
	int f1=0;
	int f2=1;
	int temp;
	if(n==1)
	{
		cout<<0;
	}
	else if(n==2)
		cout<<01;
	else 
	{
		cout<<f1<<" "<<f2<<" ";
		for(int i=0;i<n-2;i++)
		{
			temp=f2;
			f2=f2+f1;
			f1=temp;
			cout<<f2<<" ";
			
		}
	}
}
