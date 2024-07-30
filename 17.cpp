#include<iostream>
using namespace std;
int sum(int n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n=1572;
	int r;
	while(1)
	{
		if(n<9)
		{
			break;
		}
		else{
			n=sum(n);
		}
	}
	cout<<n;
	
	
}
