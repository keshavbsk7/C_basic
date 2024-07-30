#include<iostream>
using namespace std;
void findprime(int n)
{
	int flag=1;

	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<n;
	}

}
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	

	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			findprime(a[i][j]);
		}
	}

}
