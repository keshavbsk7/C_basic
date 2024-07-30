#include<iostream>
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
int main()
{
	int n=7937;
	int temp=n;
	int s,rem;
	int flag=1;
	
	if(isprime(n)){
	
	while(rem!=temp)
	{
		rem=n%10;
		n=n/10;
		rem=(rem*1000)+n;
		n=rem;
		cout<<rem<<" ";
		if(isprime(rem)==0)
		{
			flag=0;
			break;
		}
	}
}
else
	flag=0;
	
	if(flag==1)
	{
		cout<<"\ncircular prime";
	}
	else
		cout<<"not";
}
