#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int sum=1;
	while(n>=0)
	{
		if(n==1||n==0)
		{
			sum=sum*1;
			n--;
		}
		else
		{
			sum=sum*n;
			n=n-1;
		}
	}
	cout<<sum;
}
