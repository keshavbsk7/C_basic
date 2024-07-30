#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int temp,n;
	n=temp=371;
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=pow(rem,3);
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"armstrong";
	}
	else
		cout<<"not";
}
