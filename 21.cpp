#include<iostream>
#include<cmath>
using namespace std;
int len(int n)
{
	
	int count=0;
	while(n>0)
	{
		count++;
		n=n/10;
		
	}
	return count;
}
int main()
{
	int n=4313;
	int temp=n;
	int rem,sum=0;
	int i=len(n)-1;
	while(n>0)
	{
		rem=n%10;
		sum+=rem*pow(10,i);
		i--;
		n=n/10;	
	}
	cout<<sum;
}
