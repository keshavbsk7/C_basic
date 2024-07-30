#include<iostream>
using namespace std;
string change(int n)
{
	if(n==1)
	{
		return "one";
	}
	else if(n==2)
	{
		return "two";
	}
	else if(n==3)
	{
		return "three";
	}
	else if(n==4)
	{
		return "four";
	}
	else if(n==5)
	{
		return "five";
	}
	else if(n==6)
	{
		return "six";
	}
	else if(n==7)
	{
		return "seven";
	}
	else if(n==8)
	{
		return "eight";
	}
	else if(n==9)
	{
		return "nine";
	}
	else
	 return "zero";
}
int main()
{
	int n=238;
	string s[5];
	int rem,i=0;

	while(n>0)
	{
		rem=n%10;
		s[i]=change(rem);
		i=i+1;
		n=n/10;
		
	}
	for(int j=i;j>=0;j--)
	{
		cout<<s[j]<<" ";
	}
	
	return 0;
	
}
