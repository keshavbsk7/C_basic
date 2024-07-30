#include<iostream>
using namespace std;
int main()
{
	int a=22;
	int b=44;
	int div;
	for(int i=2;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		{
			if(div<i)
				div=i;
		}
	}
	cout<<div;
}
