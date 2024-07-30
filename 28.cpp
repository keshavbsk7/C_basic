#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n)
{
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int iscircular(int n)
{
	int temp=n;
	int s,rem,i=3;
	int flag=1;
	if(n>9000)
	{
		i=4;
	}
	
	if(isprime(n))
	{
	
	while(rem!=temp)
	{
		rem=n%10;
		n=n/10;
		rem=(rem*pow(10,i))+n;
		n=rem;
		
		if(isprime(rem)==0)
		{
			return 0;
		}
	}
	}
	else{
		return 0;
	}
	return 1;
}
int main()
{
	for(int i=1000;i<=50000;i++)
	{
		if(iscircular(i))
		{
			cout<<i<<" ";
		}
	}
}
