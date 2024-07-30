#include<iostream>
using namespace std;

int main()
{
	int n=3214;
	int temp=n;
	int s,rem;

	while(rem!=temp)
	{
		rem=n%10;
		n=n/10;
		rem=(rem*1000)+n;
		n=rem;
		cout<<rem<<" ";
		
	}
}


