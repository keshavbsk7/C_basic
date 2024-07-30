#include<iostream>
using namespace std;
int main()
{
	int n=457;
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	cout<<sum;
}
