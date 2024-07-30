#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int f1=0;
	int f2=1;
	int temp,sum=0;
	if(n==1)
	{
		cout<<0;
	}
	else if(n==2)
		cout<<0+1;
	else 
	{
		sum=sum+(f1+f2);
		for(int i=0;i<n-2;i++)
		{
			temp=f2;
			f2=f2+f1;
			f1=temp;
			sum+=f2;
			
		}
	}
	cout<<sum;
}

