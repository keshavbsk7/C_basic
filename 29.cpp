#include<iostream>
using namespace std;
int divisible(int a,int b)
{
	for(int i=2;i<a&&i<b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int a=4;
	int b=9;
	int x,y;
	if(divisible(a,b)){
	
	for(int i=2;i<=a;i++)
	{
		x=a*i;
		for(int j=1;j<=b;j++)
		{
			y=(b*j);	
			if(x==y)
			{
				cout<<y;
				exit(0);
			}
		}
	}
	}
	else
	{
		cout<<"lcm is "<<a*b;
	}
}

