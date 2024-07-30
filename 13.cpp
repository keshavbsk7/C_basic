#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=456;
	int rem,bin=0;
	int i=0;
	while(n>=1)
	{
		rem=n%2;
		bin=bin+(rem*pow(10,i));
		i++;
		n=n/2;
	}
	cout<<bin;
	
	
}
