#include<iostream>
using namespace std;
int isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a[5]={3,1,4,5,8};
	int c=0;;
	for(int i=0;i<5;i++)
	{
		if(a[i]==1||a[i]==2)
		{
			c++;
		}
		else if(isprime(a[i]))
			c++;
	}
	cout<<c;
	
}
